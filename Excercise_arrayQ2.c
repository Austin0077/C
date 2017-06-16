/*2. Using an array, write a program that generates the first Fibonacci terms and prints them.
A Fibonacci series is defined as follows;
fib[0]=0
fib[1]=1
fib[i]=fib[i-1]+fib[i-2] for i>=2*/

#include<stdio.h>
#include<math.h>
int main()
{
    int i,num=1;
    int fib[30]={0};
    fib[0]=0;
    fib[1]=1;
    for(i=2;i<30;i++)
    {
       fib[i]=fib[i-1]+fib[i-2];
       num++;
    }
    num=1;
    for(i=0;i<30;i++)
    {
        printf("%d\t",num);
        printf("%d",fib[i]);
        num++;
        printf("\n");

    }
    return 0;
}
