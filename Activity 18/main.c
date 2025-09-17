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
    
    // count how many failed
    for (int i = 0; i < n; i++) {
        if (students[i].grade > 3.0) {
            failCount++;
        }
    }

    // dynamic array for failing students
    struct Student* failing = (struct Student*) malloc(failCount * sizeof(struct Student));
    if (failing == NULL && failCount > 0) {
        printf("Memory allocation failed.\n");
        free(students);
        return 1;
    }

    int j = 0;
    float sum = 0;
    for (int i = 0; i < n; i++) {
        if (students[i].grade > 3.0) {
            failing[j] = students[i];
            sum += students[i].grade;
            j++;
        }
    }

    if (failCount > 0) {
        printf("\nFailing students:\n");
        for (int i = 0; i < failCount; i++) {
            printf("%d. %s (Age: %d) - Grade: %.2f\n", i + 1, failing[i].name, failing[i].age, failing[i].grade);
        }
        printf("Average failing grade: %.2f\n", sum / failCount);
    } else {
        printf("\nNo failing students!\n");
    }

    // free
    free(students);
    free(failing);

    return 0;
}