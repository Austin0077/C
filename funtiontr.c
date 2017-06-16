#include<stdio.h>
#define Pie 3.142
float calcdiameter(float r)
{
    return(r*2);
}
float calcarea(float r)
{
    return(Pie*(r*r));
}
float calccircumference(float r)
{
    return (Pie*(r+r));
}
int main()
{
    float radius;
    int s;
    do{
    printf("Enter radius:\n");
    scanf("%f",&radius);
    printf("The Diameter: %.2f\n",calcdiameter(radius));
    printf("Circumference: %.2f\n",calcarea(radius));
    printf("Area: %.2f\n",calcarea(radius));
    printf("Do You want to continue?\n1.Yes\n2.NO\n");
    scanf("%d",&s);
    }while(s==1);
    return 0;
}
