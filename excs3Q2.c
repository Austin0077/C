/*Using a loop, ask the user to enter positive integer numbers. The program will output the number of values
entered, the minimum value, the maximum value and the average of all numbers. The code will exit once a negative integer is entered.*/
#include<stdio.h>
#include<math.h>

int main()
{
    int Numb,max,min,a,sum,c=0,x;
    float Avr;
    printf("Enter a number\n");
    scanf("%d",&Numb);
    max=Numb;
    min=Numb;
    sum=0;
   while(Numb>0)
   {
    printf("Enter a Number\n");
    scanf("%d",&Numb);
    if(max<Numb)
        max=Numb;
    if(min>Numb)
        min=Numb;
    c++;
    sum=sum+Numb;
    Avr=sum/Numb;
   }
   printf("N \n%d,\n Max is\n%d\n,Min is \n%d\n Sum is\n%d\nAverage is %d",c,max,min,sum,Avr);
    }
