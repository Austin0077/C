/*2.	The following  table is used  to  compute  the  tax  payable  by  employees  in  certain organization .
Gross pay	Fewer than three dependents	Three or more dependents
Ksh.10 000 or less	Tax rate=0	Tax rate=0
More than Ksh.10 000 and less than or equal to Ksh. 20 000	Tax rate=15%	Tax rate=10%
More than Ksh. 20 000	 Tax rate=35%	Tax rate=25%
A program is required to input the gross pay and number of dependents of an employee and then computes the tax payable and net pay.
The program should output gross pay, tax payable and the net pay of an employee in a suitable format.*/
#include<stdio.h>
int main()
{
    int gross_pay,net_pay,numb,tax_payable;
    printf("Enter Your Gross Pay:\n");
    scanf("%d",&gross_pay);
    printf("Enter Number of Dependents:\n");
    scanf("%d",&numb);
    if(gross_pay>=0)//gross pay and number of Dependants must always be greater or equal to 0
    {
        if(gross_pay<=10000)
        {
            if(numb>3)
            {
                tax_payable=0;
            }
            else
            {
                tax_payable=0;
            }
        }
        else if(gross_pay<=20000)
        {
           if(numb>3)
            {
                tax_payable=0.15*gross_pay;
            }
            else
            {
                tax_payable=0.1*gross_pay;
            }
        }
        else
        {
            if(numb>3)
            {
                tax_payable=0.35*gross_pay;
            }
            else
            {
                tax_payable=0.25*gross_pay;
            }
        }
        net_pay=gross_pay-tax_payable;
        printf("Gross pay\tTax Payable\tNet Pay\n");
        printf("%d\t\t%d\t\t%d\n",gross_pay,tax_payable,net_pay);
    }
    return 0;
}
