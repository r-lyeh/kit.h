#pragma once
#define PLATFORM_DESKTOP_SDL
#define USING_SDL3_PROJECT
#include "3rd/raylib/raylib.h"

/*
*       > PLATFORM_DESKTOP_GLFW (GLFW backend):
*           - Windows (Win32, Win64)
*           - Linux (X11/Wayland desktop mode)
*           - macOS/OSX (x64, arm64)
*           - FreeBSD, OpenBSD, NetBSD, DragonFly (X11 desktop)
*       > PLATFORM_DESKTOP_SDL (SDL backend):
*           - Windows (Win32, Win64)
*           - Linux (X11/Wayland desktop mode)
*           - Others (not tested)
*       > PLATFORM_DESKTOP_RGFW (RGFW backend):
*           - Windows (Win32, Win64)
*           - Linux (X11/Wayland desktop mode)
*           - macOS/OSX (x64, arm64)
*           - Others (not tested)
*       > PLATFORM_DESKTOP_WIN32 (native Win32):
*           - Windows (Win32, Win64)
*       > PLATFORM_WEB (GLFW + Emscripten):
*           - HTML5 (WebAssembly)
*       > PLATFORM_WEB_EMSCRIPTEN (Emscripten):
*           - HTML5 (WebAssembly)
*       > PLATFORM_WEB_RGFW (Emscripten):
*           - HTML5 (WebAssembly)
*       > PLATFORM_DRM (native DRM):
*           - Raspberry Pi 0-5 (DRM/KMS)
*           - Linux DRM subsystem (KMS mode)
*           - Embedded devices (with GPU)
*       > PLATFORM_ANDROID (native NDK):
*           - Android (ARM, ARM64)
*       > PLATFORM_MEMORY
*           - Memory framebuffer output, using software renderer, no OS required
*/