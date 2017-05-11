#include<stdio.h>

int main(void)
{
    int space,row,star,numb;
    printf("Enter numb of rows to display\n");
    scanf("%d",&numb);
    for(row=1;row<=numb;row++)
    {
        for(space=numb-row;space>=1;space--){
            printf(" ");
        }
        for(star=1;star<=row*2-1;star++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
