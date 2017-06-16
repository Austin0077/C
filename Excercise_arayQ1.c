/*1. Write a program that uses an array to store the square of numbers, and displays the content of the array.*/
int main()
{
    int squre[20];
    int x, num=1;
    //store the square of numbers between 0 and 20.
    for(x=0;x<20;x++)
    {
        squre[x]=num*num;
        num++;
    }
    num=1;
    for(x=0;x<20;x++)
    {
        printf("%d\t",num);
        printf("%d",squre[x]);
        printf("\n");
        num++;
    }
    return 0;
}
