#include<stdio.h>

int main()
{
    int star,rows,num;
    printf("Enter number of rows to be printed\n");
    scanf("%d",&num);
    for(rows=num;rows>=1;rows--){
        for(star=1;star<=rows;++star){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
