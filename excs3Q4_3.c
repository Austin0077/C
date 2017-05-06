/*a switch statement that assigns to the variable marks the expected grade*/
#include<stdio.h>

int main()
{
    int M;
    do{
    printf("Enter Student marks\n");
    scanf("%d",&M);
        switch(M/10)
        {
        case 10:
        case 9:
        case 8:
        case 7:
            printf("grade is\n A\n");
        break;
        case 6:
            printf("grade is\n B\n");
        break;
        case 5:
            printf("grade is\n C\n");
        break;
        case 4:
            printf("grade is\n D\n");
        break;
        case 3:
        case 2:
        case 1:
        case 0:
            printf("grade is\n E\n");
        break;
        default:
            printf("INVALID Grade!!\n");
        }
       } while(M<100);
        return 0;
}
