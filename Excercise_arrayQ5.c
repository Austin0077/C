/*5.	A certain class has 10 students. Each student takes three units, Programming, Financial Accounting, PC maintenance.
Their lecturer has requested you to develop a simple program for storing the marks scored by each student for the three units.
The program should be able to display a detailed report on the class performance including the average per unit, per student and the average overall performance for the class.
Required:
Write a program that will fulfill the above requirement. You may make any other necessary modification to make it more users friendly.
*/
#include<stdio.h>

int main()
{
    int programming[10]={0,0,0,0,0,0,0,0,0,0};
    int F_Accounting[10]={0,0,0,0,0,0,0,0,0,0};
    int Pc_maintenance[10]={0,0,0,0,0,0,0,0,0,0};
    int x,i,student=1;
    float average=0,S_Average=0,P_average=0,F_average=0,T_average=0,total=0,sum=0;
    for(i=0;i<10;i++)
    {
        printf("Student %d\n",student);
        printf("Enter Marks for Programming\n");
        scanf("%d",&programming[i]);
        student++;
        sum=sum+programming[i];
        P_average=sum/10;
    }
    student=1;
    sum=0;
    for(i=0;i<10;i++)
    {
        printf("Student %d\n",student);
        printf("Enter marks for Financial Accounting\n");
        scanf("%d",&F_Accounting[i]);
        student++;
        sum=sum+F_Accounting[i];
        F_average=sum/10;
    }
    student=1;
    sum=0;
    for(i=0;i<10;i++)
    {
        printf("Student %d\n",student);
        printf("Enter Marks for PC Maintenance\n");
        scanf("%d",&Pc_maintenance[i]);
        student++;
        sum=sum+Pc_maintenance[i];
        average=sum/10;
    }
    T_average=(P_average+F_average+average)/3;

    printf("Average For programming is: %.2f\n",P_average);
    printf("Average For Financial Accounting is: %.2f\n",F_average);
    printf("Average For PC Maintenance is: %.2f\n",average);
    printf("Average for the Whole Class is: %.2f\n",T_average);
    student=1;
    for(x=0;x<10;x++)
    {
        printf("Average for Student %d is:",student);
        total=programming[x]+F_Accounting[x]+Pc_maintenance[x];
        S_Average=total/3;
        printf("%.2f\n",S_Average);
        student++;
    }
    return 0;

}
