#include <stdio.h>

struct rectangle {
    float length;
    float breadth;
};

int main() {
    struct rectangle r;
    float area, perimeter;

    printf("Enter Length: ");
    scanf("%f", &r.length);

    printf("Enter Breadth: ");
    scanf("%f", &r.breadth);

    area = r.length * r.breadth;
    perimeter = 2 * (r.length + r.breadth);

    printf("\n----- Rectangle Details -----\n");
    printf("Length    : %.2f\n", r.length);
    printf("Breadth   : %.2f\n", r.breadth);
    printf("Area      : %.2f\n", area);
    printf("Perimeter : %.2f\n", perimeter);

    return 0;
}