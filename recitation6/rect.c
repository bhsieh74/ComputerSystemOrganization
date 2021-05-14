#include<stdio.h>
#include "rect.c"


double rect_area(struct Rect* r) {
    double width = r->a->x + r->b->x;
    double length = r->a->y + r->b->y;
    double area = width * length;
    return area;
}

int is_in_rect(struct Point_2D* p, struct Rect* r) {
    if ((p->x > r->a->x) & (p->x < r->b->x) {
        if ((p->y > r->a->y) & (p->y < r->b->y)) {
            return 1;
        }
    }
    else {
        return 0;
    }
}