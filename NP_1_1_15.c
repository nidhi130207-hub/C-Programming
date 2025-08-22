#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    
    printf("Enter the temperature in fahrenheit: ");
    
    scanf("%f", &fahrenheit);

    
    celsius=5/9*(fahrenheit-32);

    
    printf("Temperature in Celsius: %.2f\n", celsius);

    return 0; 
}