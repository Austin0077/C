#include<stdio.h>

int main(void)
{
    int choice=1,row,space,star;
    printf(".....MENU.....\n");
    printf("1.5ROWS\t\n");
    printf("2.10ROWS\t\n");
    printf("3.EXIT\n");
    printf("Select Number of triangles to Print\n");
    scanf("%d",&choice);
    if((choice<4)&&(choice>0)){
    while(choice!=3){
    for(row=1;row<=choice;row++)
    {
        for(space=choice-row;space>=1;space--)
        {
            printf(" ");
        }
        for(star=1;star<=row*2-1;star++){
            printf("*");}

        printf("\n");
    }
    }
    }else
        printf("Invalid Choice!! Please pick one above");

    return 0;
}
