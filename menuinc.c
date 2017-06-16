#include<stdio.h>
int main()
{
    char sel,sels,selss,selsss;
    int sub=0,n=0,total=0;
    printf("\n 1. Grocery List \n 2. Modify Grocery List \n 3. Total");
    scanf("%c",&sel);
    if(sel=='1')
    {
        printf("\n1. Cake \n2. Rice \n3. Sugar \n4. Liquor \n5. Weed \n6. Smoke \n7. Total \n");
        scanf("%c", &sels);
        do
        {
            if(sels=='1')     sub=sub+10;

            else if(sels=='2')    sub=sub+20;

            else if(sels=='3')    sub=sub+20;

            else if(sels=='4')    sub=sub+40;

            else if(sels=='5')    sub=sub+100;

            else if(sels=='6')    sub=sub+100;

            else if(sels=='7')
            {
                printf("\n Thank You :-)  ");
                total=sub;
                n=1;
            }
        }while(n==0);

    }
    else if(sel=='2')
    {
        printf("\n 1. Add Item \n 2. Drop Item");
        scanf("%c",&selss);
        if(selss=='1')
        {
            printf("\n Select the Item to Add");
            printf("\n1. Cake \n2. Rice \n3. Sugar \n4. Liquor \n5. Weed \n6. Smoke \n7. Total \n");
            scanf("%c", &sels);
            do
            {
                if(sels=='1')     sub=sub+10;

                else if(sels=='2')    sub=sub+20;

                else if(sels=='3')    sub=sub+20;

                else if(sels=='4')    sub=sub+40;

                else if(sels=='5')    sub=sub+100;

                else if(sels=='6')    sub=sub+100;

                else if(sels=='7')
                {
                    printf("\n Thank You :-)  ");
                    total=sub;
                    n=1;
                }
            }while(n==0);
        else if(selss=='2')
        {
            printf("\n Select the Item to Drop");
            printf("\n1. Cake \n2. Rice \n3. Sugar \n4. Liquor \n5. Weed \n6. Smoke \n7. Total \n");
            scanf("%c", &sels);
            do
            {
                if(sels=='1')     sub=sub-10;

                else if(sels=='2')    sub=sub-20;

                else if(sels=='3')    sub=sub-20;

                else if(sels=='4')    sub=sub-40;

                else if(sels=='5')    sub=sub-100;

                else if(sels=='6')    sub=sub-100;

                else if(sels=='7')
                {
                    printf("\n Thank You :-)  ");
                    total=sub;
                    n=1;
                }
            }while(n==0);
        }

    else if(sel=='3');
    {
        printf("\n The Total is : $ %d",&total);
        printf("\n ThankYou !!! for shopping here :] ");
    }
}
