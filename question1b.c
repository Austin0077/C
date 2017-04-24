/*a program to solve following mathematical expression sqrt of((x-y)cubed)*/
#include<stdio.h>
#include<math.h>
int main()
{
    float x=0,y=0,z=0,a=0,b;
    printf("Enter Two integers, X and Y\n
           ");
    scanf("%f%f",&x,&y);
    z=pow((x-y),3);
    a=sqrt(z);
    printf("The solution of the system is:%f",a);
    return 0;

}
