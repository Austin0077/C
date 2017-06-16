// Write a function that takes two values and swaps the . in main ask the users for the two values for the function and the display the swapped values
#include<stdio.h>
int x,y,z;
void swapp(int x,int y)
{
    z=y;
    y=x;
    x=z;
    //printf("New X is %d\nNew Y is %d\n",x,y);
   // return 0;
}
int main()
{
    printf("Enter X\n");
    scanf("%d",&x);
    printf("Enter Y\n");
    scanf("%d",&y);
    swapp(x,y);
    printf("New X is %d\nNew Y is %d\n",x,y);
    return 0;
}
