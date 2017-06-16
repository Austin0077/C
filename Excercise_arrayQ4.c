/*4. Write a program that prompts and inputs positive numbers;
 store them in an array and calls a function display to output the array elements on the screen.*/

 #include<stdio.h>
int i,x,z,total,counter,numb[100];
 void display(int numb[z])
 {
    printf("You Entered the Following Integer(s)\n");
    while(z<counter)
    {
       printf("%d\n",numb[z]);
       z++;
    }
     printf("Thats All");
 }
 int main()
 {
     int x=1;
     printf("Enter Number of Integers you want to input\n");
     scanf("%d",&counter);
     for(i=0;i<counter;i++)
        {
     printf("Enter Positive integer %d\n",x);
     scanf("%d",&numb[i]);
     x++;
        }
    display(numb);
        return 0;
 }
