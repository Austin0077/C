/*3. Create a game in which a player guesses letters to try to replicate a hidden word. Create a two-dimensional array that contains five
eight-letter words and randomly select one to be the hidden word. Initially, display the hidden word using asterisks to replace each
letter. Allow the user to guess letters to replace the asterisks in the hidden word until the user completes the entire word. If the user
guesses a letter not in the hidden word, display an appropriate message. If the user guesses a letter that appears multiple times in
the hidden word, make sure each correct instance is replaced. When the user completes the word, display a count of the number of
guesses that were required. Allow the users to continue to play as many games as they want.*/
#include<stdio.h>
#include<string.h>
#include<windows.h>
void gotoxy(int x,int y);
int main()
{
    char ch,a,name[7],word[7];
    char letters[5][8]={'n','y','a','m','w','a','y','a','f','e','b','r','u','a','r','y','f','r','i','c','t','i','o','n','s','a','n','d','w','i','c','h','b','u','i','l','d','i','n','g'};
    int i=0,j,q=8,x,n,z=0,k=0,p=0,count=0,choice=1;
    printf("%d.NOTE: You only have Eight times remaining for to You LOSE\n",rand()%5);
    for(i=2;i==rand()%5;i++)
    {
        for(j=0;j<8;j++)
        {
            name[z]=letters[i][j];
              z++;
        }
    }
   // printf("%s",name);
    //while(choice==1){
    gotoxy(1,8);
    printf("********\n");
    if(count<8){
    while(count<8){
    //gotoxy(7,8);
    //printf("* * * * * * * *\n");
     printf("Guess A letter between A to Z\n");
     scanf("%c",&ch);
     count++;
     q--;
     for(z=0;ch==name[z];z++){
     switch(ch){
 case 'a':
    gotoxy(2,8);
    printf("%c",ch);
    printf("\n\n");
    break;
 case 'b':
    gotoxy(3,8);
    printf("%c",ch);
    printf("\n\n");
    break;
 case 'c':
    gotoxy(4,8);
    printf("%c",ch);
    printf("\n\n");
    break;
case 'd':
    gotoxy(5,8);
    printf("%c",ch);
    printf("\n\n");
    break;
case 'e':
    gotoxy(6,8);
    printf("%c",ch);
    printf("\n\n");
    break;
case 'f':
    gotoxy(7,8);
    printf("%c",ch);
    printf("\n\n");
    break;
case 'g':
    gotoxy(8,8);
    printf("%c",ch);
    printf("\n\n");
    break;
case 'h':
    gotoxy(20,8);
    printf("%c",ch);
    printf("\n\n");
    break;
case 'i':
    gotoxy(21,8);
    printf("%c",ch);
    printf("\n\n");
    break;
case 'j':
    gotoxy(9,8);
    printf("%c",ch);
    printf("\n\n");
    break;
case 'k':
    gotoxy(10,8);
    printf("%c",ch);
    printf("\n\n");
    break;
case 'l':
    gotoxy(11,8);
    printf("%c",ch);
    printf("\n\n");
    break;
case 'm':
    gotoxy(12,8);
    printf("%c",ch);
    printf("\n\n");
    break;
case 'n':
    gotoxy(13,8);
    printf("%c",ch);
    printf("\n\n");
    break;
case 'o':
    gotoxy(14,8);
    printf("%c",ch);
    printf("\n\n");
    break;
case 'p':
    gotoxy(15,8);
    printf("%c",ch);
    printf("\n\n");
    break;
case 'q':
    gotoxy(16,8);
    printf("%c",ch);
    printf("\n\n");
    break;
case 'r':
    gotoxy(17,8);
    printf("%c",ch);
    printf("\n\n");
    break;
case 's':
    gotoxy(18,8);
    printf("%c",ch);
    printf("\n\n");
    break;
case 't':
    gotoxy(19,8);
    printf("%c",ch);
    printf("\n\n");
    break;
case 'u':
    gotoxy(20,8);
    printf("%c",ch);
    printf("\n\n");
    break;
case 'v':
    gotoxy(21,8);
    printf("%c",ch);
    printf("\n\n");
    break;
case 'w':
    gotoxy(22,8);
    printf("%c",ch);
    printf("\n\n");
    break;
case 'x':
    gotoxy(23,8);
    printf("%c",ch);
    printf("\n\n");
    break;
case 'y':
    gotoxy(24,8);
    printf("%c",ch);
    printf("\n\n");
    break;
default:
    gotoxy(25,8);
    printf("%c",ch);
    printf("\n\n");
    break;
     }
     }
     printf("Wrong Guess!\n");
    }
    }
    else
    {
        printf("YOU LOSE\n");
    }
    //printf("Do You Want To play again?\n1.YES\n2.NO\n");
    //scanf("%d",&choice);
//}
   return 0;
}
void gotoxy(int x,int y)
{
    COORD coord;
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
