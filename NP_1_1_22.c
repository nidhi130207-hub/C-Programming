#include <stdio.h>

int main() {
    float grossSales, discount, netSales;

   
    printf("Enter gross sales: ");
    scanf("%f", &grossSales);

    
    discount = 0.10 * grossSales;


    netSales = grossSales - discount;

    printf("Net Sales after 10%% discount: %.2f\n", netSales);

    return 0;
}
 


