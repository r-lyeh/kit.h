#pragma once

//#define CIMGUI_API extern "C"
#define IMGUI_IMPL_API extern "C"
#define GL3W_API IMGUI_IMPL_API
#define IMGUI_USER_CONFIG "3rd/cimgui/cimconfig.h"

#ifdef __cplusplus
#define IMGUI_DEFINE_MATH_OPERATORS
#include "3rd/cimgui/imgui/imgui.h"
#else
#define CIMGUI_DEFINE_ENUMS_AND_STRUCTS
#define CIMGUI_USE_SDL2
#define CIMGUI_USE_SDL3
#define CIMGUI_USE_GLFW
//#define CIMGUI_USE_VULKAN
#define CIMGUI_USE_OPENGL2
#define CIMGUI_USE_OPENGL3
#include "3rd/cimgui/cimgui.h"
#include "3rd/cimgui/cimgui_impl.h"
#endif
