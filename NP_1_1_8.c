#include <stdio.h>

int main() 
{
    int dollars, rupees;

    printf("Enter the amount in dollars: ");
    scanf("%d", &dollars);

    rupees = dollars * 48;

    printf("%.2d USD is equal to %.2d INR\n", dollars, rupees);

    return 0;
}
    