#include "kit.h"
#include <tigr.h>
#include <tigr.c>

Tigr *app[32];

int window_create(int id) {
    if( !app[id] ) {
        app[id] = tigrWindow(320, 240, "hi", 0);
    }
    return 1;
}

int window_ready(int id) {
    if( app[id] && tigrClosed(app[id]) ) {
        window_destroy(id);
    }
    return app[id] && !tigrClosed(app[id]);
}

int window_swap(int id, unsigned c) {
    tigrUpdate(app[id]);
    if(c) { TPixel color; memcpy(&color, &c, 4); tigrClear(app[id],color); }
    return 1;
}

int window_destroy(int id) {
    if( app[id] ) {
        tigrFree(app[id]);
        app[id] = 0;
    }
    return 0;
}

int window_count() {
    int count = 0;
    for( int i = 0; i < countof(app); ++i ) {
        count += window_ready(i);
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
