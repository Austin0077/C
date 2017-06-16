#include<stdio.h>
#include<minmax.h>

int main()
{
    int z;
    do{
    int numb,c=1,max=0,min;

    printf("Enter a number:\n");
    scanf("%d",&numb);
    max=numb;
    min=numb;
   //do{
    while(c<3)
   {
    printf("Enter a Number\n");
    scanf("%d",&numb);
    if(max<numb)
        max=numb;
    if(min>numb)
        min=numb;
    c++;
   }
   printf("Min is %d\nMax is %d\n",min,max);
   printf("Do you want to continue?\n1. Yes\n2.No\n");
   scanf("%d",&z);
    }while(z==1);
   return 0;
}
