/*a program that takes salary input from user and after appropriate deduction show the net payable amount. */
#include<stdio.h>
#include<math.h>
int main()
{
    int S=0,x,s;
    printf("Enter Your BASIC salary:\n");
    scanf("%d",&S);
    switch(S/10000)
    {
    case 0:
        printf("Net Payable is:\n%d",S);
    break;
    case 1:
        x=S-1000;
        printf("Net Payable is:\n%d",x);
    break;
    default:
        x=S*7.000/100;
        s=S-x;
        printf("Net payable is:\n%d",s);
    }
    return 0;
}
