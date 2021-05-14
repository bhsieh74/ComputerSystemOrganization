#include<stdio.h>
#include<point.h>
#include<math.h>

void point_show(struct Point_2D* a) {
    printf("(%.2lf, %.2lf)\n", a->x, a->y);
    return;
}

double point_dist(struct Point_2D* a, struct Point_2D* b) {
    double xdistance;
    double ydistance;
    double distance;
    double xtemp = a->x - b->x;
    xdistance = xtemp * xtemp;
    double ytemp = a->y - b->y;
    ydistance = ytemp * ytemp; 
    double distance = sqrt(xdistance + ydistance);
    return distance;
}

int point_eq(struct Point_2D* a, struct Point_2D* b) {
    double distance = point_dist(&a, &b);
    if (distance < 0.000001) {
        return 1;
    }
    else {
        return 0;
    }
}
int main() {
    struct Point_2D point;
    struct Point_2D point2;
    point2.x = 10;
    point2.y = 11;
    point.x = 5;
    point.y = 6;
    point_show(&point);
    double temp = point_dist(&point, &point2);
    printf("%lf", temp);
}