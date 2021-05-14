#include<stdio.h>
#include "point.c"


typedef struct Rect {
    Point_2D a;
    Point_2D b;
};

typedef struct Point_2D {
    double x;
    double y;
};

double rect_area(struct Rect* r);

int is_in_rect(struct Point_2D* p, struct Rect* r);