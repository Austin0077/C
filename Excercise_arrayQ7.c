/*7.	Writes a  program that displays the pattern shown below;
*	*	*	*
1	*	*	*
2	2	*	*
3	3	3	*
4	4	4	4             */
#include<stdio.h>

int main()
{
    int i,j=0,a,c=0;
    printf("The Pattern above is as follows:\n\n");
    for(i=0;i<5;i++)
    {
        for(c=0;c<4;c++){if(j<1){printf("*\t");}}
        for(j=1;j<=i;j++)
        {
            printf("%d\t",i);
        }
        if(i==1){printf("*\t*\t*");}
        if(i==2){printf("*\t*");}
        if(i==3){printf("*\t");}
        printf("\n");
    }
    return 0;
}
