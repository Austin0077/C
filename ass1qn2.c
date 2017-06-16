#include<stdio.h>
int main()
{
    int grosspay=0,dependents,taxpayable=0,netpay=0,taxrate;
    printf("enter gross pay\n");
    scanf("%d",&grosspay);
    printf("enter the number of dependents on employees\n");
    scanf("%d",&dependents);
    if(dependents<3)
        {
        if(grosspay<10000)
          {
         taxrate=0;
         //taxpayable=taxrate;
         printf("tax payable is %d\n",taxrate);
         printf("net pay is:%d\n",grosspay);
         }
         else if(grosspay<20000)
                {
                     taxrate=(15/100)*grosspay;
                     netpay=grosspay-taxrate;
                     printf("tax payable: %d\n",taxrate);
                     printf("net pay is:%d\n",netpay);
                 }
                 else//(grosspay>20000)
                 {
                     taxrate=(35/100*grosspay);
                     taxpayable=taxrate;
                     netpay=grosspay-taxrate;
                     printf("tax payable is:%d\n",taxrate);
                     printf("net payable is:%d\n",netpay);
                 }
            }
            else
            {
               if(grosspay<10000)
               {
                   taxrate=0;
                   taxpayable=taxrate;
                   printf("tax payable is %d\n",taxrate);
                   printf("net pay is %d\n",netpay);
               }
               else if(grosspay<20000)
               {
                   taxrate=10/100*grosspay;
                   //taxpayable=taxrate;
                   netpay=grosspay-taxrate;
                   printf("tax payable is %d\n",taxrate);
                   printf("net payable is %d\n",netpay);
               }
               else
               {
                   taxrate=25/100*grosspay;
                   taxpayable=taxrate;
                   netpay=grosspay-taxrate;
                   printf("tax payable is %d\n",taxrate);
                   printf("net payable is %d\n",netpay);
               }
            }
        return 0;
}
