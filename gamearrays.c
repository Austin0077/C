#include<stdio.h>
#include<windows.h>
void gotoxy(int x,int y);
int main()
{
    char letters[5][8]={'n','y','a','m','w','a','y','a','f','e','b','r','u','a','r','y','f','r','i','c','t','i','o','n','s','a','n','d','w','i','c','h','b','u','i','l','d','i','n','g'};
    char name[8],n;
    int i,d=0,j,z,choice=1;
    printf("Game Mania\n");
    while(choice==1){
    printf("%d.NOTE: You only have Eight times remaining for to You LOSE\n",rand()%6);
    for(i=2;i==rand()%6;i++)
    {
        for(j=0;j<8;j++)
        {
            name[z]=letters[i][j];
              z++;
        }
    }
    printf("\nThe Game Starts Now\n");
    gotoxy(7,7);
    printf("* * * * * * * *\n");
    do
    {
        printf("Guess A letter between A to Z:\n");
        scanf("%c",&n);
        //for(z=0;ch==name[z];z++){
        if(n=='f')
        {
            gotoxy(7,7);
            printf("%c",n);
            printf("\n\n");
        }
        else if(n=='r')
        {
            gotoxy(9,7);
            printf("%c",n);
            printf("\n\n");
        }
        else if(n=='i')
        {
            gotoxy(11,7);
            printf("%c",n);
            printf("\n\n");
            gotoxy(17,7);
            printf("%c",n);
            printf("\n\n");
        }
        else if(n=='c')
        {
            gotoxy(13,7);
            printf("%c",n);
            printf("\n\n");
        }
        else if(n=='t')
        {
            gotoxy(15,7);
            printf("%c",n);
            printf("\n\n");
        }
        else if(n=='i')
        {
            gotoxy(17,7);
            printf("%c",n);
            printf("\n\n");
        }
        else if(n=='o')
        {
            gotoxy(19,7);
            printf("%c",n);
            printf("\n\n");
        }
        else  if(n=='n')
        {
            gotoxy(21,7);
            printf("%c",n);
            printf("\n\n");
        }
        else
        {
            printf("WRONG GUESS \n");
        }
        d++;
    }while(d<16);
    //getch();
    printf("Do You Want to Continue?\n1.YES\n2.NO\n");
    scanf("%d",&choice);
    }
    return 0;
}
void gotoxy(int x,int y)
{
    COORD coord;
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
