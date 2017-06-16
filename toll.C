#include<stdio.h>
#include<math.h>
#define pie 3.142
int main()
{
    float Area,triangle,circle,width,base_length,height,Radius;

    int option=0;

printf("please select an option:\n");
option:
printf("1)Area of Triangle\n2)Area of Rectangle\n3)Area of Circle\n",option);
scanf("%d",&option);
//do{
if (option==1)
{
printf("Enter the base length\n");
scanf("%f",&base_length);
printf("Enter the hight\n");
scanf("%f",&height);
Area=0.5*base_length*height;
printf("The Area of Triangle is %0.2f\n",Area);
goto option;
}
  else if(option==2)
{
    printf("Enter The base length\n");
    scanf("%f",&base_length);
    printf("Enter the width\n");
    scanf("%f",&width);
    Area=base_length*width;
    printf("The Area of The Rectangle is %0.2f",Area);
    goto option;

}
else (option==3);
{
printf("Enter the Radius\n");
scanf("%f",&Radius);
Area=pie*pow(Radius,2);
printf("The Area is %0.2f",Area);
}
return 0;

}
