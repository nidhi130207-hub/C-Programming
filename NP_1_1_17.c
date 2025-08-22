#include <stdio.h>
int main()
{
   float side,perimeter,area;
   printf("enter the value of side of square");
   scanf("%f", &side);
   area=side*side;
   perimeter=4*side;
   printf("Area of the square: %.2f\n", area);
    printf("Perimeter of the square: %.2f\n", perimeter);

    return 0; 
}
   