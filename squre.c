#include<stdio.h>
 int main()
 {
     int side,a,b;
     printf("Enter Number if side\n");
     scanf("%d",&side);
     for(a=0;a<side;a++){
        for(b=0;b<side;b++){
        printf("*");
        }
        printf("\n");
     }
 }
