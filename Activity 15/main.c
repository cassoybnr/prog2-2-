#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student {
    char name[60];
    int age;
    float grade;
};

int main() {
    struct Student s1;
    char temp[60];

    printf("Enter the student name: ");
    scanf("%59s", temp); // Reads a word (no spaces)
    strcpy(s1.name, temp);

    printf("Enter the student age: ");
    scanf("%d", &s1.age);

    printf("Enter the student grade: ");
    scanf("%f", &s1.grade);

    printf("\nName: %s\n", s1.name);
    printf("Age: %d\n", s1.age);
    printf("Grade: %.2f\n", s1.grade);
    return 0;
}