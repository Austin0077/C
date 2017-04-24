/*a program that takes a four digits integer from user and shows the digits on the screen separately*/
#include<stdio.h>
#include<math.h>
int main()
{
    int x=0,a=0,c=0,b=0;
    printf("Enter four digit number:");
    scanf("%d",&x);
    a=x/1000;
    x=x%1000;
    b=x/100;
    x=x%100;
    c=x/10;
    x=x%10;
    printf("%d\n%d\n%d\n%d\n",a,b,c,x);
    return 0;
}
