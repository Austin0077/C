/*.	Write a  program that uses an array to compute and display a multiplication table like the one shown below;
*	1	2	3	4
1	1	2	3	4
2	2	4	6	8
3	3	6	9	12
4	4	8	12	16
*/
#include<stdio.h>
#include<string.h>

int main()
{
    int multiplication[5][5]={{0,0},{0,1},{0,2},{0,3},{0,4},{1,0}};
    int row,s,column,z=1;
    printf("*\t1\t2\t3\t4\t\n");
    for(row=1;row<=4;row++)
    {
        if(z>=1){printf("%d\t",z);}
        z++;
        for(column=1;column<=4;column++)
        {
            printf("%d\t",(row*column));
        }
        printf("\n");
        //getchar();
    }

    return 0;
}
