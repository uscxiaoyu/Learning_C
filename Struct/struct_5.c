/*
    计算两点之间的距离
*/

#include <math.h>
#include <stdio.h>

#define sqr(n) ((n) * (n))

typedef struct {
    double x;
    double y;
} Point;

double distanceOf(Point pa, Point pb){
    return sqrt(sqr(pa.x - pb.x) + sqr(pa.y - pb.y));
}

int main(void){
    Point crnt, dest;
    printf("当前地点的X坐标:"); scanf("%lf", &crnt.x);
    printf("当前地点的Y坐标:"); scanf("%lf", &crnt.y);
    printf("目的地的X坐标:");   scanf("%lf", &dest.x);
    printf("目的地的Y坐标:");   scanf("%lf", &dest.y);

    printf("到目的地的距离:%.2f\n", distanceOf(crnt, dest));
}
