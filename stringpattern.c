#include<stdio.h>
#include<string.h>

int main(){
char letter[8]={'P','R','O','G','R','A','M','\0'};
int i,j;
for(i=0;letter[i]!='\0';i++)
{
    for(j=0;j<=i;j++)
    {
    printf("%c\t", letter[j]);
    }
    printf("\n");
}
}
