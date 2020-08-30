/***sizeof***/
#include <stdio.h>
void main()
{
    printf("数据类型 存储大小(单位:字节) 值范围\n");
    
    printf("## 整数类型\n");
    printf("char %lu\n", sizeof(char));
    printf("unsigned char %lu\n", sizeof(unsigned char));
    printf("signed char %lu\n", sizeof(signed char));
    printf("int %lu\n", sizeof(int));
    printf("unsigned int %lu\n", sizeof(unsigned int));
    printf("short %lu\n", sizeof(short));
    printf("unsigned short %lu\n", sizeof(unsigned short));
    printf("long %lu\n", sizeof(long));
    printf("unsigned long %lu\n", sizeof(unsigned long));

    printf("## 浮点类型\n");
    printf("float %lu\n", sizeof(float));
    printf("double %lu\n", sizeof(double));
    printf("long double %lu\n", sizeof(long double));
}
