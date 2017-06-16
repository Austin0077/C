#include<stdio.h>
#include<string.h>

int main()
{
    int age;
    char Fname,Lname;
    printf("Enter Your First Name:");
    scanf("%s",&Fname);
    printf("Enter your last name:");
    scanf("%s",&Lname);
    printf("Input your age:");
    scanf("%d",&age);
    printf("Hi %c\t %c, You are %d years old",Fname,Lname,age);
    return 0;

}
