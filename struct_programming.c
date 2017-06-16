

#include <stdio.h>

struct programming
{
    float constant;
    char *pointer;
};

main()
{
   struct programming variable;
   char string[] = "Programming in Software Development.";

   variable.constant = 1.23;
   variable.pointer = string;

   printf("%f\n", variable.constant);
   printf("%s\n", variable.pointer);

   return 0;
}
