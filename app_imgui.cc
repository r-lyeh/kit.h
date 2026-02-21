#include "app_imgui.h"

#include "3rd/cimgui/imgui/imgui.cpp"
#include "3rd/cimgui/imgui/imgui_demo.cpp"
#include "3rd/cimgui/imgui/imgui_draw.cpp"
#include "3rd/cimgui/imgui/imgui_tables.cpp"
#include "3rd/cimgui/imgui/imgui_widgets.cpp"

#include "3rd/cimgui/cimgui.cpp"

#include "3rd/cimgui/imgui/imgui_impl_opengl3.cpp" // gl3: highest include priority
//#include "3rd/cimgui/imgui/imgui_impl_dx10.cpp"
//#include "3rd/cimgui/imgui/imgui_impl_dx11.cpp"
//#include "3rd/cimgui/imgui/imgui_impl_dx12.cpp"
//#include "3rd/cimgui/imgui/imgui_impl_dx9.cpp"
//#include "3rd/cimgui/imgui/imgui_impl_opengl2.cpp"
//#include "3rd/cimgui/imgui/imgui_impl_vulkan.cpp"
#if __has_include("webgpu/webgpu.h")
#define IMGUI_IMPL_WEBGPU_BACKEND_WGVK
#include "3rd/cimgui/imgui/imgui_impl_wgpu.cpp"
#endif

#if __has_include("SDL2/SDL.h")
#include "3rd/cimgui/imgui/imgui_impl_sdl2.cpp"
#include "3rd/cimgui/imgui/imgui_impl_sdlrenderer2.cpp"
#elif __has_include("SDL3/SDL.h")
#include "3rd/cimgui/imgui/imgui_impl_sdl3.cpp"
#include "3rd/cimgui/imgui/imgui_impl_sdlgpu3.cpp"
#include "3rd/cimgui/imgui/imgui_impl_sdlrenderer3.cpp"
#endif
#if __has_include("GLFW/glfw3.h")
#define Saturate Saturate2
#include "3rd/cimgui/imgui/imgui_impl_glfw.cpp"
#endif
//#include "3rd/cimgui/imgui/imgui_impl_allegro5.cpp"
//#include "3rd/cimgui/imgui/imgui_impl_glut.cpp"

#ifdef _WIN32
#include "3rd/cimgui/imgui/imgui_impl_win32.cpp"
#endif
//#include "3rd/cimgui/imgui/imgui_impl_android.cpp"
//#include "3rd/cimgui/imgui/imgui_impl_metal.mm"
//#include "3rd/cimgui/imgui/imgui_impl_osx.mm"
//#include "3rd/cimgui/imgui/imgui_impl_null.cpp"
