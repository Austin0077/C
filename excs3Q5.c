#include<stdio.h>

int main()
{
    int Num,row,star,rows,stars;
    printf("Enter no. of rows for the pyramid\n");
    scanf("%d",&Num);
    Num=Num/2;
    for(row=1;row<=Num;row++){
        for(star=1;star<=row;star++){
            printf("*");
        }
printf("\n");
}
   for(rows=Num;rows>=1;rows--){
        for(stars=1;stars<=rows;++stars){
            printf("*");
        }
        printf("\n");
    }

        return 0;
}
