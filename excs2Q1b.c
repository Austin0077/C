/*a looping program which takes amount of the bill from user and calculates the payable amount by applying the criteria.
 customers that he will give 10 % discount on all bills and if a bill amount is greater than 5000 then a discount of 15 %*/
#include<stdio.h>
int main()
{
    int bill=0,x,y,response;
    do
    {
    printf("Enter your Bill:\n");
    scanf("%d",&bill);

    if(bill>5000)
     {
     y=(bill*15.000/100);
     x=bill-y;
     printf("Bill is:\n%d\n",x);
     }
    else
    {
    y=(bill*10.000/100);
    x=bill-y;
    printf("Bill is:\n%d\n",x);
    }
    printf("Press 1 to continue or 0 to exit\n");
    scanf("%d",&response);
    }while(response==1);
    return 0;
}

