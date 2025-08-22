#include <stdio.h>
int main()
{
    int gram,kilograms;
    printf("Enter the value of weight in Kilograms :");
    scanf("%d", &kilograms);
    gram=kilograms*1000;
    printf("%2d grams = %2d kilograms\n", gram, kilograms);
    return 0;
}

