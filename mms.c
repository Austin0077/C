//a program to print three pyramids tailored to user preferred number of rows
#include<stdio.h>


int main()
{
    int row,rows,rowz,star,stars,starz,numbofrows,space,c=0,z;
    printf("Enter Number of rows to be printed\n");
    scanf("%d",&numbofrows);
    printf("Enter number of patterns you wish to see\n");
    scanf("%d",&z);
    do{
    for(row=1;row<=numbofrows;row++){
        for(star=1;star<=row;star++){
            printf("*");}
        printf("\n");
    }
    for(rows=numbofrows;rows>=1;rows--){
        for(stars=1;stars<=rows;stars++){
            printf("*");
        }
        printf("\n");
    }
    for(rowz=1;rowz<=numbofrows;rowz++){
        for(space=numbofrows-rowz;space>=1;space--){
            printf(" ");
        }
        for(starz=1;starz<=rowz*2-1;starz++){
            printf("*");
        }
        printf("\n");
    }
    c++;
    }while(c<z);
    return 0;
}
