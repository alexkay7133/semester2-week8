
#include <stdio.h>
#include "shapes.h"

int main( void ) {

    // complete the structure definition in the header file first
    // code in main to test the structures and functions
    Point p = {.x = 12, .y = 5};
    Rectangle rec = makeRectangle(p, 7, 4);
    float rec_area = area(rec);
    printf("%.1f\n", rec_area);
    return 0;
}

Rectangle makeRectangle( Point p, float width, float height ){
    Rectangle r = {
        .p = p,
        .width = width,
        .height = height
    };
    return r;
}

float area( Rectangle r ) {
    float a = r.width * r.height;
    return a;
}

void shiftRectangle( Rectangle *r, Point dp ) {
    r->p.x+=dp.x;
    r->p.y+=dp.y;
    return;
}

void scaleRectangle( Rectangle *r, float scale ) {
    r->height *= scale;
    r->width *= scale;
    return;
}
