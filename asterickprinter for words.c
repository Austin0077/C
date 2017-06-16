#include <stdio.h>
#include <stdlib.h>

#define maxchar 10      // number of characters in asterisk form
#define maxrows 6               // vertical length
#define maxcols 5               // horizontal length
#define imax    5               // number of chars to be displayed in asterisk form

int main()
{
  // testing word with spaces
  char number[imax] = "92 02";

  // array of numbers
  char letter[maxrows][maxchar][maxcols] =
    { //  j=0 ,    j=1 ,    j=2 ,    j=3 ,    j=4 ,    j=5 ,    j=6 ,    j=7 ,    j=8 ,    j=9
      { " ** ",  "*** ",  "*** ",  "*** ",  "*  *",  "****",  "*   ",  "****",  " ** ",  " ***" },  // row=0
      { "*  *",  "  * ",  "   *",  "   *",  "*  *",  "*   ",  "*   ",  "   *",  "*  *",  "*  *" },  // row=1
      { "*  *",  "  * ",  "   *",  " ** ",  "****",  "*** ",  "*** ",  "   *",  " ** ",  "*  *" },  // row=2
      { "*  *",  "  * ",  "*** ",  "   *",  "   *",  "   *",  "*  *",  "   *",  "*  *",  " ***" },  // row=3
      { "*  *",  "  * ",  "*   ",  "   *",  "   *",  "   *",  "*  *",  "   *",  "*  *",  "   *" },  // row=4
      { " ** ",  "****",  "****",  "*** ",  "   *",  "*** ",  "*** ",  "   *",  " ** ",  "   *" }   // row=5
    };


  // "iterators"
  int row, col, i;

  for(row=0; row < maxrows; ++row) // print from up to down
    {
      for(i=0; i < imax; ++i)      // for each character in array "number"
        {
          int j = number[i] - '0'; // get position in "letter". For characters, change to  j = number[i] - 'a';

          if(j<0)
            printf("    ");        // if number[i] is not a valid character, print a space
          else
            for(col = 0; col < maxcols; ++col)
              printf("%c", letter[row][j][col]);   // print each * at given row

          printf("  ");            // print a small space between characters
        }
      printf("\n");                // proceed to next row
    }

  return 0;
}
