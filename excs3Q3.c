/*3.	You have been commissioned by MMU Supermarket to write a program that will determine the retail price of an item given suitable input. The pricing
policy is that any item that is expected to sell in one week or less is marked up 5% and any item that is expected to stay on the shelf for more than one
week is marked up 10% over the wholesale price.The input will consist of the wholesale price of an item and the expected number of days until the item is sold.
The program repeatedly asks for the input then displays the retail price.*/
#include<stdio.h>

int main()
{
    int price,days;
    float retail;
    //printf("Enter Wholesale price\n");
    //scanf("%d",&price);
    //printf("Enter Days to be stored in the counter\n");
    //scanf("%d",&days);
    do
    {
     printf("Enter Wholesale price\n");
     scanf("%d",&price);
     printf("Enter Days to be stored in the counter\n");
     scanf("%d",&days);
      if(days<=7)
       {
        retail=(price*0.05)+price;
        printf("Retail price is \n%.2f\n",retail);
       }
     else
     {
        retail=(price*0.1)+price;
        printf("Retail price is \n%.2f\n",retail);
     }

    }
    while (price>0);

    return 0;
}

