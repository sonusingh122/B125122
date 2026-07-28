#include <stdio.h>

struct product {
    int product_id;
    char name[50];
    float price;
    int quantity;
};

int main() {
    struct product p;

    printf("Enter Product ID: ");
    scanf("%d", &p.product_id);

    printf("Enter Product Name: ");
    scanf("%s", p.name);

    printf("Enter Price: ");
    scanf("%f", &p.price);

    printf("Enter Quantity: ");
    scanf("%d", &p.quantity);

    printf("\n----- Product Details -----\n");
    printf("Product ID : %d\n", p.product_id);
    printf("Name       : %s\n", p.name);
    printf("Price      : %.2f\n", p.price);
    printf("Quantity   : %d\n", p.quantity);

    return 0;
}