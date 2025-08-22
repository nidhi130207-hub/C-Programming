#include <stdio.h>
int main()
{
    int gram,kilograms;
    printf("Enter the value of weight in grams:");
    scanf("%d", &gram);
    kilograms=gram/1000;
    printf("%2d grams = %2d kilograms\n", gram, kilograms);
    return 0;
}

