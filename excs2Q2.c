/*a program whose input is the loudness of noise in decibels and outputs the  human perception of the noise.*/
#include<stdio.h>
int main()
{
    int L=0;
    printf("Enter the loudness of noise:\n");
    scanf("%d",&L);
    if(L<=50)
    {
        printf("Quite");
    }
    else if(L<=70)
    {
        printf("Intrusive");
    }
    else if(L<=90)
    {
        printf("Annoying");
    }
    else if(L<=110)
    {
        printf("Very annoying");
    }
    else
    {
        printf("Uncomfortable");
    }
    return 0;
}
