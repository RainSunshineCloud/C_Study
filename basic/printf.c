#include <stdio.h>

main ()
{
    int number = 123;
    float floats = 1.232;
    char string[] = "asda";
    printf("%d \n",number);//输出整数
    printf("%1.0d \n",number);//输出整数
    printf("%1.0o \n",number);//输出整数
    printf("%1.1u \n",number);//输出整数
    printf("%1.2e \n",floats);//输出浮点数
    printf("%1.2f \n",floats);//输出浮点数
    printf("%1.2g \n",floats);//输出浮点数
    printf("%c \n",string);//输出单个字符
    printf("%s \n",string);//输出字符串
    return 0;
}