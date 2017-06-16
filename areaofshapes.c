//a program to calculate area of different shapes
#include<stdio.h>
#include<math.h>
#include<malloc.h>
//#include<12483.h>
#include<Windows.h>
#include<stdlib.h>
#define Pie 3.142
//#define Pie 3.14

int main()
{
    int base,height,side,length,width,radius,shape,area,circumference;
    do{
        printf(".....AREA...MENU......\n\t");
        printf("1.TRIANGLE:\n\t");
        printf("2.CIRCLE:\n\t");
        printf("3.SQURE:\n\t");
        printf("4.RECTANGLE:\n\t");
        printf("5.SPHERE:\n\t");
        printf("6.EXIT:\n");
        printf("Please select the shape to get the area\n");
        scanf("%d",&shape);
        if(shape!=6){
        switch(shape)
        {
        case 1:
            {
                printf("Enter Base of triangle\n");
                scanf("%d",&base);
                printf("Enter height of triangle\n");
                scanf("%d",&height);
                area=0.5*base*height;
                printf("Area of the triangle is: %d\n",area);
            break;
            }
        case 2:
            {
              printf("Enter radius of the Circle\n");
                scanf("%d",&radius);
                circumference=Pie*(radius*2);
                printf("Circumference o the circle is: %d\n",circumference);
                area=Pie*(radius*radius);
                printf("Area of the Circle is: %d\n",area);
            break;
            }
        case 3:
            {
                printf("Enter Side of the Squre\n");
                scanf("%d",&side);
                area=side*side;
                printf("Area of the Squre is: %d\n",area);
            break;
            }
        case 4:
            {
                printf("Enter Length of the Rectangle\n");
                scanf("%d",&length);
                printf("Enter Width of the Rectangle\n");
                scanf("%d",&width);
                area=length*width;
                printf("Area of the Rectangle is: %d\n",area);
            break;
            }
        case 5:
            {
                printf("Enter radius of Sphere\n");
                scanf("%d",&radius);
                area=(4.000/3.0000000)*Pie*radius*radius;
                printf("Area of the Sphere is: %d\n",area);
            break;
            }
        default:
            printf("!!INVALID CHOICE\n");
        }
        }
    }while(shape!=6);

    return 0;
}
