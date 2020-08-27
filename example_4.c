/**符号常量的使用**/
#include <stdio.h>
#define PRICE 10 // 声明常量
void main()
{
    // 声明变量
    int total, num;
    num = 5;

    // 使用常量
    total = num * PRICE;
    printf("total = %d\n", total);
}
