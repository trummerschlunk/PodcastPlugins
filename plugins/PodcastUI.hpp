// Copyright 2022-2025 Filipe Coelho <falktx@falktx.com>
// SPDX-License-Identifier: GPL-3.0-or-later

#include "DistrhoUI.hpp"

#include "Quantum.hpp"
#include "extra/ScopedPointer.hpp"
#include "ui-widgets/InspectorWindow.hpp"

#include "BuildInfo1.hpp"
#include "BuildInfo2.hpp"
#include "Logo.hpp"

START_NAMESPACE_DISTRHO

// --------------------------------------------------------------------------------------------------------------------
// custom widget for drawing plugin name (so it appears on top of other widgets if needed)

class MasterMeNameWidget : public NanoSubWidget
{
    QuantumTheme& theme;
    QuantumThemeCallback* const callback;
    NanoImage image, image2x;
    ScopedPointer<InspectorWindow> inspectorWindow;

public:
    explicit MasterMeNameWidget(NanoTopLevelWidget* const parent, QuantumThemeCallback* const cb, QuantumTheme& t)
        : NanoSubWidget(parent),
          theme(t),
          callback(cb)
    {
        setName("Name");

        image = createImageFromMemory(Logo::signet_master_me_whiteData, Logo::signet_master_me_whiteDataSize, 0);
        image2x = createImageFromMemory(Logo::signet_master_me_white_2xData, Logo::signet_master_me_white_2xDataSize, 0);
    }

    void adjustSize()
    {
        const double scaleFactor = getTopLevelWidget()->getScaleFactor();
        const Size<uint> imgSize = image.getSize();

        setSize(imgSize.getWidth() * scaleFactor, imgSize.getHeight() * scaleFactor);
    }

protected:
    void onNanoDisplay() override
    {
        const double scaleFactor = getTopLevelWidget()->getScaleFactor();

        beginPath();
        rect(0, 0, getWidth(), getHeight());
        fillPaint(imagePattern(0, 0, getWidth(), getHeight(), 0, scaleFactor >= 1.5 ? image2x : image, 1));
        fill();
    }

    bool onMouse(const MouseEvent& ev) override
    {
        if (ev.button == 1 && ev.press && contains(ev.pos))
        {
            if (inspectorWindow == nullptr)
                inspectorWindow = new InspectorWindow(getTopLevelWidget(), theme, callback);

            inspectorWindow->isOpen = true;
        }

        return false;
    }
};

// --------------------------------------------------------------------------------------------------------------------

class PodcastUI : public UI,
                  public QuantumThemeCallback
{
    QuantumTheme theme;

    // plugin name
    MasterMeNameWidget name;

public:
    PodcastUI()
        : UI(DISTRHO_UI_DEFAULT_WIDTH, DISTRHO_UI_DEFAULT_HEIGHT, true),
          name(this, this, theme)
    {
        loadSharedResources();

        const double scaleFactor = getScaleFactor();

        if (d_isNotEqual(scaleFactor, 1.0))
        {
            setSize(DISTRHO_UI_DEFAULT_WIDTH * scaleFactor, DISTRHO_UI_DEFAULT_HEIGHT * scaleFactor);

            theme.borderSize *= scaleFactor;
            theme.padding *= scaleFactor;
            theme.fontSize *= scaleFactor;
            theme.textHeight *= scaleFactor;
            theme.widgetLineSize *= scaleFactor;
            theme.windowPadding *= scaleFactor;
            theme.textPixelRatioWidthCompensation = static_cast<uint>(scaleFactor - 1.0 + 0.25);
        }

        // initial resize and reposition
        resizeWidgets(getWidth(), getHeight());
    }

    ~PodcastUI() override
    {
    }

    void repositionWidgets()
    {
        const QuantumMetrics metrics(theme);

        name.setAbsolutePos(getWidth() - name.getWidth(), 0);
    }

    void resizeWidgets(const uint width, const uint height)
    {
        const QuantumMetrics metrics(theme);

        name.adjustSize();

        repositionWidgets();
    }

protected:
    /* ----------------------------------------------------------------------------------------------------------------
     * DSP/Plugin Callbacks */

    void parameterChanged(const uint32_t index, const float value) override
    {
    }

    /* ----------------------------------------------------------------------------------------------------------------
     * Widget Callbacks */

    void onNanoDisplay() override
    {
        beginPath();
        rect(0, 0, getWidth(), getHeight());
        fillColor(theme.windowBackgroundColor);
        fill();

        const Color color2(Color(theme.widgetBackgroundColor, theme.windowBackgroundColor, 0.5f).withAlpha(0.5f));
        const Color color1(color2.withAlpha(0.f));
        const uint widthBy3 = getWidth() / 3;
        const uint height = getHeight();

        beginPath();
        rect(0, 0, widthBy3, height);
        fillPaint(linearGradient(0, 0, widthBy3, 0, color2, color1));
        fill();

        beginPath();
        rect(getWidth() - widthBy3, 0, widthBy3, height);
        fillPaint(linearGradient(getWidth() - widthBy3, 0, getWidth(), 0, color1, color2));
        fill();

        beginPath();
        rect(widthBy3 - 1, 0, widthBy3 + 2, height);
        fillColor(color1);
        fill();
    }

    bool onMouse(const MouseEvent& ev) override
    {
        if (ev.press)
            getWindow().focus();

        return UI::onMouse(ev);
    }

    void onResize(const ResizeEvent& ev) override
    {
        UI::onResize(ev);
        resizeWidgets(ev.size.getWidth(), ev.size.getHeight());
    }

    /* ----------------------------------------------------------------------------------------------------------------
     * Custom Widget Callbacks */

    void quantumThemeChanged(const bool size, const bool colors) override
    {
    }

    DISTRHO_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(PodcastUI)
};

// --------------------------------------------------------------------------------------------------------------------

END_NAMESPACE_DISTRHO
