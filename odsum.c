#include<stdio.h>

int main()
{
    int sum=0,numb=1;
    while(numb<9)
    {
        numb=numb+2;
        sum=numb+sum;
        //printf("Sum of ODD numbers between 0 and 9 is\n %d\n",sum);
        //printf("%d",numb);
    }
    printf("Sum of ODD numbers between 0 and 9 is\n %d",sum);
    return 0;
}
