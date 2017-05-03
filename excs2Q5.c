/*Write a  program to compute the real roots of the equation: ax2+bx+c=0. The program will prompt the user to input the values of a, b, and c. It then computes the real roots of the equation based on the following rules:
-if a and b are zero=> no solution
-if a is zero=>one root (-c/b)
-if b2-4ac is negative=>no roots
-Otherwise=> two roots
The roots can be computed using the following formula:
x1=-b+(b2-4ac)1/2/2a
x=-b-(b2-4ac)1/2/2a*/
#include<stdio.h>
#include <math.h>
int main()
{
    int a=0,b=0,c=0,w,x,x1,y,z;
    printf("Enter values of: \na\nb\nc\n");
    scanf("%d%d%d",&a,&b,&c);
    if((b==0)&&(a==0))
    {
        printf("The Equation has No Solutions/n");
    }
    else if(a==0)
    {
        w=-c/b;
        printf("One Root:\n%d",w);
    }
    else if(((b*b)-4*a*c)<0)
    {
        printf("No Real Roots\n");
    }
    else
    {
        y=(-b+sqrt((b*b)-4*a*c));
        x1=y/(2.000*a);
        z=(-b-sqrt((b*b)-4*a*c));\
        x=z/(2.000*a);
        printf("Two Roots\n");
        printf("%d\n%d",x1,x);
    }
    return 0;
}

