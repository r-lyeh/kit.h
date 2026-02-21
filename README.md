# Apps

- [x] Compile many application layers quickly.
- [x] For web, desktops, consoles and mobiles.
- [x] All batteries included.
- [x] Try different rendering backends easily:
  - [x] OpenGL.
  - [x] Vulkan.
  - [x] WebGPU.
- [x] Try different windowing backends easily:
  - [x] Atto.
  - [x] CImgui.
  - [x] GLFW3.
  - [x] Raylib.
  - [x] RGFW.
  - [x] SDL2.
  - [x] SDL3.
  - [x] Tigr.
  - [ ] Todo:
    - [ ] GLFM.
    - [ ] Sokol.

# Build

```bash
git clone https://github.com/r-lyeh/apps && cd apps
cl demo_atto.c    app_atto.c
cl demo_glfw.c    app_glfw.c
cl demo_rgfw.c    app_rgfw.c
cl demo_sdl2.c    app_sdl2.c
cl demo_sdl3.c    app_sdl3.c
cl demo_tigr.c    app_tigr.c
cl demo_raylib.c  app_raylib.c app_sdl3.c
cl demo_ig.c      app_imgui.cc app_sdl*.c app_glfw.c app_vulkan.c app_opengl.c
```

# License
This software is multi-licensed into the [Unlicense](https://unlicense.org/), [0-BSD](https://opensource.org/licenses/0BSD) and [MIT (No Attribution)](https://github.com/aws/mit-0) licenses at your discretion. Choose whichever license you prefer. Any contribution to this repository is implicitly subjected to the same release conditions aforementioned.

<a href="https://github.com/r-lyeh/apps/issues"><img alt="Issues" src="https://img.shields.io/github/issues-raw/r-lyeh/apps.svg?label=Issues&logo=github&logoColor=white"/></a> <a href="https://discord.gg/yyjCkUQKPV"><img alt="Discord" src="https://img.shields.io/discord/354670964400848898?color=5865F2&label=Chat&logo=discord&logoColor=white"/></a>
