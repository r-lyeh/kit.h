#include "kit_tigr.h"
#include "3rd/tigr/tigr.c"

Tigr *app[32];

void* canvas_handle(int id) {
    return app[id];
}

int canvas_create(int id) {
    if( !app[id] ) {
        app[id] = tigrWindow(320, 240, "hi", 0);
    }
    return 1;
}

int canvas_ready(int id) {
    if( app[id] && tigrClosed(app[id]) ) {
        canvas_destroy(id);
    }
    return app[id] && !tigrClosed(app[id]);
}

void canvas_clear(int id, unsigned color) {
    if( color ) {
        union { TPixel p; unsigned c; } u; u.c = color;
        tigrClear(app[id], u.p);
    }
}

int canvas_swap(int id) {
    tigrUpdate(app[id]);
    return 1;
}

int canvas_destroy(int id) {
    if( app[id] ) {
        tigrFree(app[id]);
        app[id] = 0;
    }
    return 0;
}

int canvas_count() {
    int count = 0;
    for( int i = 0; i < sizeof(app)/sizeof(0[app]); ++i ) {
        count += canvas_ready(i);
    }
    return count;
}

int key(int id, int ch) {
    if( app[id] ) {
    /**/ if( ch == '<' ) ch = TK_LEFT;
    else if( ch == '>' ) ch = TK_RIGHT;
    return tigrKeyDown(app[id], ch);
    return tigrKeyHeld(app[id], ch);
    }
    return 0;
}

int print(int id, const char *fmt, ...) {
    tigrPrint(app[id], tfont, 10,10, tigrRGBA(255,255,255,255), fmt);
    return 1;
}
