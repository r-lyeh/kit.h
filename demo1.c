// cl test.c

#include "kit.h"
#include <stdio.h>

#undef  RGB
#define RGB(r,g,b) ((255<<24)|(b<<16)|(g<<8)|(r<<0))

const unsigned gray[] = {
    RGB(8,11,15), // dark
    RGB(37,44,56), // dim
    RGB(50,68,69), // mid
    RGB(111,120,134), // normal
    RGB(214,224,242), // highlight
};
const unsigned pal[] = {
    RGB(15,103,251), // blue
    RGB(255,26,0), // red
    RGB(254,12,115), // pink

    RGB(0,255,0), // green
    RGB(0,210,229), // cyan
    RGB(255,212,0), // yellow
};
unsigned use1,use2;

int main() {
    canvas_create(0);
    canvas_create(1);

    while( canvas_count() > 0 ) { // ( canvas_count() == 2 ) {
        if( canvas_ready(0) ) {
            canvas_clear(0,gray[use1%countof(gray)]);
            canvas_swap(0);
        }
        if( canvas_ready(1) ) {
            canvas_clear(1,pal[use2%countof(pal)]);
            canvas_swap(1);
        }
        if(key(1,'<')) use1++;
        if(key(1,'>')) use2++;
    }

    canvas_destroy(0);
    canvas_destroy(1);
}
