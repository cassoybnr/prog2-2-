#include <stdio.h>
#include <stdlib.h>

void display_and_average(float *grades, int count) {
    if (count == 0) {
        printf("No grades to display.\n");
        return;
    }
    float sum = 0;
    printf("Grades:\n");
    for (int i = 0; i < count; i++) {
        printf("Student %d: %.2f\n", i + 1, grades[i]);
        sum += grades[i];
    }
    printf("Average grade: %.2f\n", sum / count);
}

void update_grade(float *grades, int count) {
    int idx;
    float new_grade;
    if (count == 0) {
        printf("No grades to update.\n");
        return;
    }
    printf("Enter student number to update (1-%d): ", count);
    scanf("%d", &idx);
    if (idx < 1 || idx > count) {
        printf("Invalid student number.\n");
        return;
    }
    printf("Enter new grade: ");
    scanf("%f", &new_grade);
    grades[idx - 1] = new_grade;
    printf("Grade updated.\n");
}

float* remove_last(float *grades, int *count) {
    if (*count == 0) {
        printf("No grades to remove.\n");
        return grades;
    }
    (*count)--;
    float *temp = (float*)realloc(grades, (*count) * sizeof(float));
    if (temp == NULL && *count > 0) {
        printf("Memory reallocation failed. Grades unchanged.\n");
        (*count)++;
        return grades;
    }
    printf("Last student's grade removed.\n");
    return temp ? temp : grades;
}

int main() {
    int n, choice;
    printf("Enter number of students: ");
    scanf("%d\ns", &n);

    float *grades = (float*)calloc(n, sizeof(float));
    if (grades == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter grade for student %d: ", i + 1);
        scanf("%f", &grades[i]);
    }

    do {
        printf("\nMenu:\n");
        printf("1. Display & Calculate\n");
        printf("2. Update\n");
        printf("3. Remove\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                display_and_average(grades, n);
                break;
            case 2:
                update_grade(grades, n);
                break;
            case 3:
                grades = remove_last(grades, &n);
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 4);

    free(grades);
    return 0;
}