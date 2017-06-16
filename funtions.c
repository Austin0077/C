#include<stdio.h>
//int r;
#define Pie 3.142

float calcdiameter(float r)
{
    float y;
    y=2*r;
    printf("Diameter is:\n%f\n",y);
    return y;
}
float calccircumference(float r)
{
    float c;
    c=calcdiameter(r)*Pie;
    printf("Circumference is:\n%f\n",c);
    //return c;
}
float calcarea(float r)
{
    float area;
    area=Pie*r*r;
    printf("Area is: \n%f\n",area);
   // return area;
}
int main()
{
    int r;
    printf("Enter radius:\n");
    scanf("%d",&r);
    calcdiameter(r);
    calccircumference(r);
    calcarea(r);
    return 0;
}
