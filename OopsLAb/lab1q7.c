#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float c, maths, physics;
};

int main() {
    struct Student s;
    float total, average;

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Marks in C: ");
    scanf("%f", &s.c);

    printf("Enter Marks in Mathematics: ");
    scanf("%f", &s.maths);

    printf("Enter Marks in Physics: ");
    scanf("%f", &s.physics);

    total = s.c + s.maths + s.physics;
    average = total / 3;

    printf("\nTotal Marks = %.2f", total);
    printf("\nAverage = %.2f", average);

    return 0;
}
