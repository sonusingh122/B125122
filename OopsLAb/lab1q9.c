#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float cgpa;
};

int main() {
    struct Student s[5];
    int i;

    for(i = 0; i < 5; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter CGPA: ");
        scanf("%f", &s[i].cgpa);
    }

    printf("\nStudents having CGPA >= 8.0\n");

    for(i = 0; i < 5; i++) {
        if(s[i].cgpa >= 8.0) {
            printf("\nRoll: %d", s[i].roll);
            printf("\nName: %s", s[i].name);
            printf("\nCGPA: %.2f\n", s[i].cgpa);
        }
    }

    return 0;
}
