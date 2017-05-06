#include<stdio.h>
#include<math.h>
int main()
{
    int num,min,max,sum=0,average,N=1;
    printf("Enter a number\n");
    scanf("%d",&num);
    if(num>1)
    {
        min=num;
        max=num;
        while(num>0)
        {
            printf("Enter a Number\n");
            scanf("%d",&num);
            if(num>0)
            {
                if(num<min)
                    min=num;
                    sum+=num;
                if(num>max)
                    max=num;
                sum+=num;
                N++;
            }
        }
        average=sum/N;
        printf("N=%d,Min=%d,Max=%d,Average=%d",N,min,max,average);
    }
    return 0;
}
