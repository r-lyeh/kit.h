#ifdef _WIN32 // remove some stupid APIENTRY compiler warning
#define UNICODE
#define OEMRESOURCE
#include "winsock2.h"
#endif

#ifdef _WIN32
#ifdef _MSC_VER
#pragma comment(lib, "user32.lib")
#pragma comment(lib, "shell32.lib")
#pragma comment(lib, "gdi32.lib")
#endif
#define _GLFW_WIN32
#endif

#include "3rd/GLFW/src/cocoa_time.c"
#include "3rd/GLFW/src/cocoa_init.m"
#include "3rd/GLFW/src/cocoa_joystick.m"
#include "3rd/GLFW/src/cocoa_monitor.m"
#include "3rd/GLFW/src/cocoa_window.m"
#include "3rd/GLFW/src/nsgl_context.m"
#include "3rd/GLFW/src/context.c"
#include "3rd/GLFW/src/egl_context.c"
#include "3rd/GLFW/src/glx_context.c"
#include "3rd/GLFW/src/init.c"
#include "3rd/GLFW/src/input.c"
#include "3rd/GLFW/src/linux_joystick.c"
#include "3rd/GLFW/src/monitor.c"
#include "3rd/GLFW/src/osmesa_context.c"
#include "3rd/GLFW/src/platform.c"
#include "3rd/GLFW/src/posix_module.c"
#include "3rd/GLFW/src/posix_poll.c"
#include "3rd/GLFW/src/posix_thread.c"
#include "3rd/GLFW/src/posix_time.c"
#include "3rd/GLFW/src/vulkan.c"
#include "3rd/GLFW/src/wgl_context.c"
#include "3rd/GLFW/src/win32_init.c"
#include "3rd/GLFW/src/win32_joystick.c"
#include "3rd/GLFW/src/win32_module.c"
#include "3rd/GLFW/src/win32_monitor.c"
#include "3rd/GLFW/src/win32_thread.c"
#include "3rd/GLFW/src/win32_time.c"
#include "3rd/GLFW/src/win32_window.c"
#include "3rd/GLFW/src/window.c"
#include "3rd/GLFW/src/wl_init.c"
#include "3rd/GLFW/src/wl_monitor.c"
#include "3rd/GLFW/src/wl_window.c"
#include "3rd/GLFW/src/x11_init.c"
#include "3rd/GLFW/src/x11_monitor.c"
#include "3rd/GLFW/src/x11_window.c"
#include "3rd/GLFW/src/xkb_unicode.c"

#define fitToMonitor null##fitToMonitor
#define acquireMonitor null##acquireMonitor
#define releaseMonitor null##releaseMonitor
#define createNativeWindow null##createNativeWindow
#include "3rd/GLFW/src/null_init.c"
#include "3rd/GLFW/src/null_joystick.c"
#include "3rd/GLFW/src/null_monitor.c"
#include "3rd/GLFW/src/null_window.c"
