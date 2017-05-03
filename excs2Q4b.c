#include<stdio.h>
int main()
{
    int salary=0,netsalary;
    printf("Enter your basic Salary:\n");
    scanf("%d",&salary);
    switch(salary<10000)
    {
    case 1:
        netsalary=salary;
    break;
    case 0:
        switch(salary<20000)
        {
        case 1:
            netsalary=salary-1000;
        break;
        case 0:
            netsalary=salary-(salary*0.07);
        break;
        }
    break;
    }
    printf("Net salary is:\n%d",netsalary);
    return 0;
}
