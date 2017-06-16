/*1. Write a function to generate a 10 by 10 multiplication table and
display the table on the screen. Invoke the function in main( ).*/
#include<stdio.h>
#include<string.h>

int rows=10,columns=10;
void multiplication()
{
    int rowbycolumn[11][11];
    int i,j,z=1;
    printf(" \t1\t2\t3\t4\t5\t6\t7\t8\t9\t10\t\n");
   // printf("1\t2\t3\t4\t5\t6\t7\t\8\t9\t10\t\n");
    for(i=1;i<=rows;i++)
    {
        if(z>0){printf("%d\t",z);}
        z++;
        for(j=1;j<=columns;j++)
        {
        rowbycolumn[i][j]=i*j;
        printf("%d\t",rowbycolumn[i][j]);
        }
        printf("\n");
    }

}
int main()
{
    printf("A 10 by 10 Multiplication table:\n");
    multiplication();
    return 0;
}
