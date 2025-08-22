#include <stdio.h>
// Addition,Subtraction,Product&Division
int main()
{
    float a;
    printf("Enter the value of a:");
    scanf("%f", &a);
    float b;
    printf("Enter the value of b:");
    scanf("%f", &b);
    float Division=a/b;
    float sum=a+b;
    float product=a*b;
    float difference=a-b;
    printf("the difference is %f\n",difference);
    printf("the sum is %f\n",sum);
    printf("the product is %f\n",product);
    printf("the Division is %f\n",Division);
    return 0;
}