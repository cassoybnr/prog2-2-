Structures and Dynamic Arrays

Using the same problem from our practice, transfer all students with failing grades (>3.0) to another dynamically allocated array Display the failing students and compute their average grade.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define structure
struct Student {
    char name[50];
    int age;
    float grade;
};

int main() {
    int n, failCount = 0;
    printf("Enter number of students: ");
    scanf("%d", &n);
    
    struct Student* students = (struct Student*) malloc(n * sizeof(struct Student));
    if (students == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // student details
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Grade: ");
        scanf("%f", &students[i].grade);
    }
    
    for (int i = 0; i < n; i++) {
       // count how many failed
    }

    // dynamic array for failing students
    struct Student* failing = (struct Student*) malloc(failCount * sizeof(struct Student));
    if (failing == NULL) {
        printf("Memory allocation failed.\n");
        free(students);
        return 1;
    }

    int j = 0;
    float sum = 0;
    for (int i = 0; i < n; i++) {
      // transfer tanan failing
    }

    if (failCount > 0) {
        // display ang mga failing
    } else {
        printf("\nNo failing students!\n");
    }

    // free
    free(students);
    free(failing);

    return 0;
}