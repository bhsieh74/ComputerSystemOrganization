#include<assert.h>
#include<stdio.h>
#include "point.c"
#include "rect.c"

int main() {
    struct Point_2D point1;
    struct Point_2D point2;
    struct Point_2D point3;
    struct Point_2D point4;
    struct Point_2D point5;
    struct Rect r;

    point1.x = 10;
    point1.y = 11;
    point2.x = 5;
    point2.y = 6;
    point3.x = 11;
    point3.y = 11;
    point4.x = 1;
    point4.y = 1;
    point5.x = 15;
    point5.y = 15;

    r.upper = point1;
    r.lower = point2;
    double area = rect_area(&r);
    assert(area - 25 < 0.00001);


    int isin1 = is_in_rect(&point3, &r);
    int isin2 = is_in_rect(&point4, &r);
    int isin3 = is_in_rect(&point5, &r);
    assert(isin1);
    assert(isin2);
    assert(isin3);


}