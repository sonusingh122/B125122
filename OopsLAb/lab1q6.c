#include <stdio.h>

struct distance {
    int feet;
    int inches;
};

int main() {
    struct distance d1, d2, total;

    printf("Enter first distance:\n");
    printf("Feet: ");
    scanf("%d", &d1.feet);
    printf("Inches: ");
    scanf("%d", &d1.inches);

    printf("\nEnter second distance:\n");
    printf("Feet: ");
    scanf("%d", &d2.feet);
    printf("Inches: ");
    scanf("%d", &d2.inches);

    total.feet = d1.feet + d2.feet;
    total.inches = d1.inches + d2.inches;

    printf("\nTotal Distance:\n");
    printf("%d Feet %d Inches\n", total.feet, total.inches);

    return 0;
}