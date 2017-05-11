#include<stdio.h>

int main(){
    int side, i, j;

    printf("Enter side of square\n");
    scanf("%d", &side);

    /* Row iterator for loop */
    for(i = 0; i < side; i++){
     /* Column iterator for loop */
        for(j = 0; j < side; j++){
           printf("*");
        }
        printf("\n");
    }
    return 0;
}
