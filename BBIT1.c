#include <stdio.h>
int main()
{
    int x=0, y=0, sum=0;
    printf("Please enter values for x and y \n");
    scanf("%d%d", &x, &y);
    sum=x+y;
    printf("The sum is: %d\n", sum);
    return 0;
}
