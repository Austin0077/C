/*1. A program is required for a computer game. The user keys in the number of rounds he wishes to play.
For each round the user enters his lucky number. The program takes the number and divides it with a secret number. If the remainder
of the division is zero, it is considered a draw for the round and the total score is incriminated by 1.
Otherwise if it is any other even number, it is considered a win for the round and the total score is incremented by 3.
 However if it is an odd number, it is considered a loss for the round and the total score is decremented by 3.
 This is done until he completes his rounds. He wins if the total score at the end is a positive number. Write a C program to accomplish this*/
#include<stdio.h>
int main()
{
    int c=0,total=0,luckynum,choice=1,secret=0,y=0.0,z,n=1,x,numb;
    do{
    printf("Input the number of times you want to play:\n");
    scanf("%d",&numb);

    if(numb>0){//if 0 or a negative number is selected the program terminates
    do{
        printf("Enter your Lucky Number %d:\n",n);
        scanf("%d",&luckynum);
        if(luckynum!=0){//lucky number can be a negative but not a zero because of division by zero error.
        secret=numb*2;// secret number even the programmer does not know it as it is determined by the lucky number chosen by player.
        x=luckynum%secret;// x is the remainder of the lucky number divided by the secret number.
        y=x%2;            //Y is either 0 or 1 depending on whether the remainder is EVEN or ODD
        n++;
        switch(x)
        {
          case 0:
            {
            printf("A DRAW\n");
            total++;
            }
          break;
          default:
            {
              switch(y)
              {
                case 0:
                 {
                   printf("WIN\n");
                   total=total+3;
                  }
               break;
               case 1:
                 {
                   printf("LOSE\n");
                   total=total-3;
                 }
               break;
               default:
                   printf("Good bye");
            }
          }

        }
        }
        else{
            printf("INVALID LUCKY Number\n Please Select another Number\n");
        }
         c++;
    }while(c<numb);
    printf("Your total Score is: %d\n",total);
    if(total>0){
        printf("!!Congratulations!!\n!!You Won The Game!!\n\n");
    }
    else {
        printf("You Lost!!\nBetter LUCK! Next time\n\n");
    }
    }
    c=0;
    n=1;
    total=0;
    printf("Do you want to play again?\n1.YES\n2.NO\n");
    scanf("%d",&choice);
    }while(choice==1);
    ;
    return 0;
}
