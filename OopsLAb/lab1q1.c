#include <stdio.h>

struct student {
    int roll;
    char name[50];
    float age;
    float cgpa;
};

int main() {
    struct student s1;

    printf("Enter Roll Number: ");
    scanf("%d", &s1.roll);

    printf("Enter Name: ");
    scanf("%s", s1.name);

    printf("Enter age: ");
    scanf("%f", &s1.age);

    printf("Enter cgpa: ");
    scanf("%f", &s1.cgpa);
    
    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", s1.roll);
    printf("Name: %s\n", s1.name);
    printf("age: %.2f\n", s1.age);
    printf("cgpa: %.2f\n", s1.cgpa);

    return 0;
}