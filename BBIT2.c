/* This is a program to read two numbers, exchange them and display. Its by BBIT Y1S1*/
#include <stdio.h>
int main ()
{
    int num1=0,num2=0,temp=0;
    printf("Enter two numbers:");
    scanf("%d%d",&num1,&num2);
    printf("BEFORE EXCHANGE \n");
    printf("number1=%d\n",num1);
    printf("Number2=%d\n",num2);
    temp=num1;
    num1=num2;
    num2=temp;
    printf("AFTER EXCHANGE \n");
    printf("number1=%d\n",num1);
    printf("Number2=%d\n",num2);
    return 0;
}
