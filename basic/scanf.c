#include <stdio.h>

main ()
{
    int number1;
    int number2;
    char input_msg[] = "请输入数字" ;
    char output_msg[] = "您刚才输入的数字是：";

    printf("%s",input_msg);

    scanf("%d %d",&number1,&number2);

    printf("%s %d %d",output_msg,number1,number2);

    return 0;

}