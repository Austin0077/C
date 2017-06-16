/*3.	Write a program which prompts a user for the number of students, and saves it in an int variable.
 Prompt the user for the marks of each student and saves in an array. The program must check the mark is between 0 and 100.
 Finally the program displays the average, minimum and maximum mark*/
#include<stdio.h>

int main()
{
    int numb,i,sum=0,max=0,min;
    float avr=0;
    printf("Enter number of students:\n");
    scanf("%d",&numb);
    int marks[numb];
    min=marks[0];
    for(i=0;i<numb;i++)
    {
        printf("Enter students marks:\n");
        scanf("%d",&marks[i]);
        if((i<=100)&&(i>=0)){
        sum=sum+marks[i];
        if (marks[i]>max)
            max=marks[i];

        if(marks[i]<min)
            min=marks[i];

        }

    }
    avr=sum/numb;
    printf("Average of the numbers you entered is:\n");
    printf("%f\n",avr);
    printf("Max is %d \nMin is %d",max,min);
    return 0;
}
