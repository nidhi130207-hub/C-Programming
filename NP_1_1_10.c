#include <stdio.h>

int main() {
    float dollars, rupees, pounds;

    
    const float DOLLAR_TO_INR = 48.0;
    const float POUND_TO_INR = 70.0;

    
    printf("Enter the amount in  dollars: ");
    scanf("%f", &dollars);

    rupees = dollars * DOLLAR_TO_INR;
    pounds = rupees / POUND_TO_INR;

    printf("%.2f USD is equal to %.2f GBP\n", dollars, pounds);

    return 0;
}