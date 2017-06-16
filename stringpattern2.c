#include<stdio.h>

int main()
{
    char letter[8]={'P','R','O','G','R','A','M','\0'};
    char name[8]={'P','R','O','G','R','A','M','\0'};
    int i,j;
    for(i=0;letter[i]!='\0';i++)
       {
          for(j=0;j<=i;j++)
            {
               printf("%c\t", letter[j]);
            }
          printf("\n");
       }
    for(i=6;name[i]!='\0';i--)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c\t",name[j]);
        }
        printf("\n");
    }
    return 0;
}
