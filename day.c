/*a program that takes the days as input and outputs the months and days*/
#include<stdio.h>
#include<math.h>
int main()
{
    int day=0,month=0,a=0,days=0;
    printf("Enter Number of Days:");
    scanf("%d",&day);
    a=day/30;
    days=day%30;
    printf("Months %d",a);
    printf("Days=%d",days);
    return 0;
}
