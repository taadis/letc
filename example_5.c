/***求圆的面积***/
#include <stdio.h>
#define PI 3.14 // 声明常量
void main()
{
    // 圆半径
    int r = 2;

    // 圆面积
    float s;
    s = PI * r * r;
    printf("s = %.2f\n", s);
}
