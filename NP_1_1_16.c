#include <stdio.h>

int main() {
    float principal, rate, time, simple_interest;
    printf("Enter the principal amount (P): ");
    scanf("%f", &principal);
    printf("Enter the annual rate of interest (R in %%): ");
    scanf("%f", &rate);
    printf("Enter the time in years (N): ");
    scanf("%f", &time);
    simple_interest = (principal * time * rate) / 100.0; 
    printf("The simple interest (I) is: %.2f\n", simple_interest); 

    return 0;
}