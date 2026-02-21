#include "app_rgfw.h"

u8 icon[4 * 3 * 3] = {0xFF, 0x00, 0x00, 0xFF,    0xFF, 0x00, 0x00, 0xFF,     0xFF, 0x00, 0x00, 0xFF,   0xFF, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF,     0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF};

int main() {
    RGFW_window* win = RGFW_createWindow("RGFW", 100, 100, 500, 500, (u64)0);
    RGFW_event event;

    RGFW_window_setExitKey(win, RGFW_escape);
    RGFW_window_setIcon(win, icon, 3, 3, RGFW_formatRGBA8);

    while (RGFW_window_shouldClose(win) == RGFW_FALSE) {
        while (RGFW_window_checkEvent(win, &event)) {
            if (event.type == RGFW_quit)
                break;
        }
    }

    RGFW_window_close(win);
}

#if 0
#include "app_rgfw.h"
#include "app_opengl.h"

#include <stdio.h>

void keyfunc(RGFW_window* win, RGFW_key key, RGFW_keymod keyMod, RGFW_bool repeat, RGFW_bool pressed) {
    RGFW_UNUSED(repeat);
    if (key == RGFW_escape && pressed) {
        RGFW_window_setShouldClose(win, 1);
    }
}

int main() {
    /* the RGFW_windowOpenGL flag tells it to create an OpenGL context, but you can also create your own with RGFW_window_createContext_OpenGL */
    RGFW_window* win = RGFW_createWindow("a window", 0, 0, 800, 600, RGFW_windowCenter | RGFW_windowNoResize | RGFW_windowOpenGL);

    RGFW_setKeyCallback(keyfunc); // you can use callbacks like this if you want

    while (RGFW_window_shouldClose(win) == RGFW_FALSE) {
        RGFW_event event;
        while (RGFW_window_checkEvent(win, &event)) {  // or RGFW_pollEvents(); if you only want callbacks
            // you can either check the current event yourself
            if (event.type == RGFW_quit) break;

            i32 mouseX, mouseY;
            RGFW_window_getMouse(win, &mouseX, &mouseY);

            if (event.type == RGFW_mouseButtonPressed && event.button.value == RGFW_mouseLeft) {
                printf("You clicked at x: %d, y: %d\n", mouseX, mouseY);
            }

            // or use the existing functions
            if (RGFW_isMousePressed(RGFW_mouseRight)) {
                printf("The right mouse button was clicked at x: %d, y: %d\n", mouseX, mouseY);
            }
        }

        // OpenGL 1.1 is used here for a simple example, but you can use any version you want (if you request it first (see gl33/gl33.c))
        glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );

        glBegin(GL_TRIANGLES);
            glColor3f(1.0f, 0.0f, 0.0f); glVertex2f(-0.6f, -0.75f);
            glColor3f(0.0f, 1.0f, 0.0f); glVertex2f(0.6f, -0.75f);
            glColor3f(0.0f, 0.0f, 1.0f); glVertex2f(0.0f, 0.75f);
        glEnd();

        RGFW_window_swapBuffers_OpenGL(win);
        glFlush();
    }

    RGFW_window_close(win);
    return 0;
}
#endif
