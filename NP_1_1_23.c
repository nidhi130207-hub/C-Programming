#include <stdio.h>
int main() 
{
    float subjectX, subjectY, subjectZ;
    float total, average;
    printf("Enter marks for Subject X: ");
    scanf("%f", &subjectX);

    printf("Enter marks for Subject Y: ");
    scanf("%f", &subjectY);

    printf("Enter marks for Subject Z: ");
    scanf("%f", &subjectZ);
    total = subjectX + subjectY + subjectZ;
    average = total / 3;
    printf("Total Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", average);

    return 0;
}


