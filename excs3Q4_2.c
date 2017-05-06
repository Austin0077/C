/*a program whose input is the loudness of noise in decibels and outputs the  human perception of the noise.*/
#include<stdio.h>
int main()
{
    int L=0;
    do
    {
    printf("Enter the loudness of noise:\n");
    scanf("%d",&L);
    if(L<=50)
    {
        printf("Quite\n");
    }
    else if(L<=70)
    {
        printf("Intrusive\n");
    }
    else if(L<=90)
    {
        printf("Annoying\n");
    }
    else if(L<=110)
    {
        printf("Very annoying\n");
    }
    else
    {
        printf("Uncomfortable\n");
    }
    }
    while(L>=0);
    return 0;
}
