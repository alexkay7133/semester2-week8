
#include <stdbool.h>
#include <math.h>

#include "shapes.h"

Point makePoint(float x, float y) {
    Point new;
    new.x = x;
    new.y = y;
    return new;
}

Line makeLine(Point p1, Point p2) {
    Line new;
    new.p[0] = p1;
    new.p[1] = p2;
    return new;
}

Triangle makeTriangle(Point p1, Point p2, Point p3) {
    Triangle new;
    new.p[0] = p1;
    new.p[1] = p2;
    new.p[2] = p3;
    return new;
}



float lineLength(Line l) {
    float xlength = l.p[0].x - l.p[1].x;
    float ylength = l.p[0].y - l.p[1].y;
    //do not need to worry about negative values as they are squared in the next line
    float length = sqrt((xlength*xlength) + (ylength*ylength));
    return length;
}

float triangleArea(Triangle t) {
    float area = 0.5*fabs(t.p[0].x*(t.p[1].y-t.p[2].y) + t.p[1].x*(t.p[2].y-t.p[0].y) + t.p[2].x*(t.p[0].y-t.p[1].y));
    return area;
}



bool samePoint(Point p1, Point p2) {
    if (p1.x == p2.x && p1.y == p2.y) {
        return true;
    }
    return false;
}

bool pointInLine(Point p, Line l) {
    if ((p.x == l.p[0].x && p.y == l.p[0].y) || (p.x == l.p[1].x && p.y == l.p[1].y)) {
        return true;
    }
    return false;
}

bool pointInTriangle(Point p, Triangle t) {
    if ((p.x == t.p[0].x && p.y == t.p[0].y) || (p.x == t.p[1].x && p.y == t.p[1].y) || (p.x == t.p[2].x && p.y == t.p[2].y)) {
        return true;
    }
    return false;
}
