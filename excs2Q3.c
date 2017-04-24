/*a switch statement that assigns to the variable marks the expected grade*/
#include<stdio.h>

int main()
{
    float M=0;
    printf("Enter Student marks\n");
    scanf("%f",&M);
    if(M>=70)
    {
        printf("A");
    }
    else if(M>=60)
    {
        printf("B");
    }
    else if(M>=50)
    {
        printf("C");
    }
    else if(M>=40)
    {
        printf("D");
    }
    else
    {
        printf("E");
    }
    return 0;
}
