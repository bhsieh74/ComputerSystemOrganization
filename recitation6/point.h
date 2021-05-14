#include<stdio.h>
#include<math.h>

typedef struct Point_2D {
    double x;
    double y;
};

void point_show(struct Point_2D* a);

void point_dist(struct Point_2D* a, struct Point_2D* b);
