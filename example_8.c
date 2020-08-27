/*******编制密码程序******/
#include <stdio.h>
void main()
{
    char word, password;

    // 输出提示
    printf("请输入 a-n 的一个字母:\n");

    // 输入字符
    scanf("%c", &word);
    password = word + 1;
    printf("加密后的字母为 %c\n", password);
}
