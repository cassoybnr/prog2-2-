#include <stdio.h>

int main() {
    int students, i = 0;
    float average;

    printf("Enter the number of students: ");
    scanf("%d", &students);

    float grades[students];

    for (i = 0; i < students; i++) {
        printf("Enter grade for student %d: ", i + 1);
        scanf("%f", &grades[i]);
    }

    float sum = 0;
    for (i = 0; i < students; i++) {
        sum += grades[i];
    }
    printf("/nStudent grades:");
    for (i = 0; i < students; i++) {
        printf(" %.2f ", grades[i]);
    }
    printf("\n");

    average = sum / students;
    printf("The average grade is: %.2f\n", average);



    return 0;
}