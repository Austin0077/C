#include<stdio.h>
#include<stdlib.h>
int main()
{
int choice=0;
while(choice!=4)
{

 printf("\n\tMENU DEMONSTRATION");
 printf("\n\t------------------------------");
 printf("\n\n\t 1. OPTION 1");
 printf("\n\t 2. OPTION 2");
 printf("\n\t 3. OPTION 3");
 printf("\n\t 4. EXIT");
 printf("\n\n Enter Your CHoice: ");
 scanf("%1[1234]d%*c",&choice);
 switch(choice)
 {
  case 1:
              printf("\nYOU SELECTED OPTION 1 %c",1);
              break;
  case 2:
              printf("\nYOU SELECTED OPTION 1 %c",2);
              break;
  case 3:
              printf("\nYOU SELECTED OPTION 1 %c",3);
              break;
  case 4:
              printf("\nYOU SELECTED OPTION 1 %c",4);
              exit(0);
  otherwise:
             printf("\nINVALID SELECTION...Please try again");
  }
  getch();
}
}
