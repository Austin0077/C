/*expressions using C expressions and functions and write a simple program to implement the equation*/
#include<stdio.h>
#include<math.h>
int main()
{
    int u=0,x=0,v=0,w=0,s=0,m=0,z=0,k=0;
    printf("Enter four Intagers:\n");
    scanf("%d%d%d%d",&u,&v,&x,&w);
    s=u+v;
    m=pow(w,2)*2;
    z=sqrt(s);
    k=z+m;
    printf("The solution is:(%d)",k);
    return 0;
}

