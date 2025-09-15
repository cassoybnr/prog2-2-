#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    float grade;
};

int main(){
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student* students = (struct Student*)malloc(n * sizeof(struct Student));
    if (students == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Grade: ");
        scanf("%f", &students[i].grade);
    }

    printf("\n - - - Student List - - - \n");
    for (int i = 0; i < n; i++) {
        printf("%d. %s (Age: %d) - Grade: %.2f\n", 
               i + 1, students[i].name, students[i].age, students[i].grade);
    }

    free(students);
    return 0;
}