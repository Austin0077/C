#include<stdio.h>
#include<math.h>

int main()
{
    int sum=0,numb=2,count=0,x;
    do{
        x=numb%2;
        count++;
        if(x==1){
            sum=sum+numb;

        }
        //printf("Sum of ODD numbers between 0 and 9 is\n %d",sum);
        numb=numb+1;
    }while(count<9);

    printf("Sum of ODD numbers between 0 and 9 is\n %d",sum);
    return 0;
}
