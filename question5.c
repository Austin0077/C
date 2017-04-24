/*a program that prompts for a, b and  x and calculates,Side = sqrt 2+b2  2a b cos x*/
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,x,y,z,c,side;
    printf("Enter intergers:\na\nb\nc\n");
    scanf("%d%d%d",&a,&b,&x);
    y=pow(a,2);
    z=pow(b,2);
    c=sqrt(y+z);
    side=2*a*b*cos(x);
    printf("Side=:%d",side);
    return 0;
}

