/*a program that computes the radius, circumfrence and area of a circle*/
#include <stdio.h>
#define Pie 3.14
int main()
{
    float radius=0, diameter=0,circumfrence=0,area=0;
    printf("Enter the radius of the circle:");
    scanf("%f",&radius);
    diameter=2*radius;
    circumfrence=Pie*diameter;
    area=Pie*radius*radius;
    printf("Radius\t Diameter\t Circumfrence\t Area\n");
    printf("%.2f\t %.2f\t \t %.2f\t \t %.2f\n",radius,diameter,circumfrence,area);
    return 0;
}

