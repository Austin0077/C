/* 3.	Write a C program that uses four functions namely input(), getGrade(), output() and main() to read in the average marks scored
by a student and output the grade attained. The input function is used to read marks for each 5 subjects and then returns the
average mark for a student counts the number of failing marks (marks below 40%). This function should only accept values that fall within
the range 0- 100. The average mark is then passed as a parameter to the getGrade() function which uses it to assign a grade based on the
following classification:
Mark  			Grade
75 and above   	 A
60 and below 75	 B
50 and below 60  C
40 and below 50  D
Below 40 		 E
The average mark and computed grade are then passed as parameters to the output() function, which displays the average mark,
number of failing marks and the grade. All functions are called from main. Allow the program to repeatedly ask a user for the average
mark and display the grade.
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int *average;
int fail;

char grade;
int input()
{
    int marks=0,c=0,a=1,sum=0;    // c= Counting variable. a Subject counter
    while(c<5)
    {
           printf("Enter Marks for Subject %d:\n",a);
           scanf("%d",&marks);
           if((marks>=0)&&(marks<=100))
        {
             if(marks<40)
               {
                  fail++;  // fail counter
               }
        sum=sum+marks;

    c++;//marks counter
    a++;//subject counter
    }
    else{
        printf("INVALID MARK!!\n");// In case inputed grade is a negative or more than one hundred.
    }
    }
    average=sum/5;
    return average;
}
char getgrade()
{
    input(average);
    if(average<40)
    {
       grade='E';
    }
    else if(average<50)
    {
        grade='D';
    }
    else if(average<60)
    {
        grade='C';
    }
    else if(average<70)
    {
        grade='B';
    }
    else
    {
        grade='A';
    }
    return grade;
}
int output(char grd)
{
    printf("Grade: %c\n",getgrade(average));
    printf("Your Average Mark is: %d\n",average);
    printf("Number of failed Subjects: %d\n\n",fail);
    return 0;
}
int main()
{
    int choice,grd;
    do
    {
        output(grd);
        fail=0;
        printf("Do You Want to continue?\n1. YES\n2. NO\n");
        scanf("%d",&choice);

    }while(choice==1);
    return 0;
}
