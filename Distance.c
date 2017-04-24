/*a program that prompts the user for the Cartesian coordinates of two points (x1, y1) and (x2,y2) and displays the distance between them.*/
#include <stdio.h>
#include <math.h>
int main()
{
    float x1=0,y1=0,x2=0,y2=0,Distance=0,z=0,a=0,b=0,c=0;
    printf("Enter the Cartesian coordinates:\n");
    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
    printf("x1=%.2f,y1=%.2f\n",x1,y1);
    printf("x2=%.2f,y2=%.2f\n",x2,y2);
    z=x1-x2;
    a=y1-y2;
    b=z*z;
    c=a*a;
    Distance=sqrt(b+c);
    printf("The distance between (%.2f,%.2f)",x1,y1);
    printf("and(%.2f,%.2f)is:%.2f\n",x2,y2,Distance);
    return 0;

}
