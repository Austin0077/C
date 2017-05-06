#include<stdio.h>

int main()
{
    int Num,x,y,c;
    printf("Enter no. of rows for the pyramid\n");
    scanf("%d",&Num);
    y=Num;
    for(x=0;x<=Num;x++)
    {
        for(c=1;c<y;c++)
        {
            printf(" ");
            y--;
        }
        printf("\n");

        for(c=0;c<=2*x-1;c++)
            printf("*");

            for(c=0;c<=2*x+;c++)
            printf("*");

        printf("\n");
    }
    return 0;
}
