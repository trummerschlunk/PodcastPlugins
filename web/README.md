This html file shows how to use the [mapi](https://github.com/DISTRHO/MAPI) interface of compiled podcast-plugins.

Building podcast-plugins for web requires the use of emscripten.
Assuming emscripten is installed and setup, building is as simple as:

```sh
source /path/to/emsdk/emsdk_env.sh
cd /path/to/podcast-plugins
env CC=emcc CXX=em++ make NOOPT=true mapi
```

The `NOOPT=true` disables optimizations, so that the wasm files can be loaded on browsers that do not support SIMD (such as old WebKit versions).
