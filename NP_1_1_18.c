#include <stdio.h>
int main()
{
   float length,width,perimeter,area;
   printf("enter the value of length:");
   scanf("%f", &length);
   printf("enter the value of width:");
   scanf("%f", &width);
   area=length*width;
   perimeter=2*(length+width);
   printf("Area of the rectangle: %.2f\n", area);
    printf("Perimeter of the rectangle: %.2f\n", perimeter);

    return 0; 
}
   