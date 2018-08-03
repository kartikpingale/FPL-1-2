#include <stdio.h>

int main()
{
    float price, discount, tax;
    printf("Enter price of the laptop: ");
    scanf("%f", &price);
    discount = 0.15*price;
    price = price-discount;
    tax = 0.07*price;
    printf("Discount: %0.2f\nEffective Price: %0.2f\nSales Tax: %0.2f\n", discount, price, tax);
    return 0;
}
