/*2. Write a program that prompts the user to enter a string, and let
them type it in. the program then outputs:
The string in uppercase
The string in lower case
The length of the string
The string in reverse order*/
#include<stdio.h>
#include<string.h>

int main()
{
    char name[100];
    char nem;
    int i,j;
    printf("Enter a string of characters\n");
    while(nem!='\n')  // terminates if user hit enter
    {
        nem=getchar();
        name[i]=nem;
        i++;
    }
    name[i]='\n';
    printf("You're sentence was:\n %s", name);
    printf("The String in Uppercase is:\n%s",strupr(name));
    printf("The String in Lower Case is:\n%s",strlwr(name));
    printf("The Length of The String is: %d\n",strlen(name));
    printf("The String in Reverse is:%s\n",strrev(name));

    return 0;
}
