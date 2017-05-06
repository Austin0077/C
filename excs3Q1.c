//Write a program the computes squares and cubes of the first 20 integers. The program   should produce a printout in the Tubular form.
#include<stdio.h>
#include<math.h>
int main()
{
    int count=0,N=0,sq,cu;
     printf("N\t Square\t Cube\t\n");
    do
    {
    count=count+1;
    N++;
        sq=N*N;
        cu=N*N*N;

        printf("%d\t %d\t %d\t",N,sq,cu);
        printf("\n");
    }while(count<21);


    return 0;
}
