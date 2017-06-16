/*Write a program in C to display the pattern like right angle triangle with a number. Go to the editor

The pattern like :

1
12
123
1234*/
#include<stdio.h>

int main()
{
    int row,star,space,num=4;
    printf("Enter the last number to display\n");
    scanf("%d",&num);
    for(row=1;row<=num;row++){
       for(star=1;star<=row;star++)
            printf("%d",star);
    printf("\n");
    }
    return 0;
}
