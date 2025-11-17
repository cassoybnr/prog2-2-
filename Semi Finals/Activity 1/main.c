#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Patient {
    char name[60];
    int age;
    float heart_rate;
    float bp_systolic;
    float bp_diastolic;
};

int main() {
    int n;
    printf("Enter number of patients: ");
    while (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Enter a positive integer: ");
        while(getchar() != '\n');
    }

    struct Patient *patients = (struct Patient*)malloc(n * sizeof(struct Patient));
    if (!patients) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("\nPatient %d:\n", i + 1);

        printf("Name: ");
        while (getchar() != '\n'); // clear buffer
        fgets(patients[i].name, sizeof(patients[i].name), stdin);
        size_t len = strlen(patients[i].name);
        if (len > 0 && patients[i].name[len - 1] == '\n')
            patients[i].name[len - 1] = '\0';

        printf("Age: ");
        while (scanf("%d", &patients[i].age) != 1 || patients[i].age <= 0) {
            printf("Invalid age. Enter again: ");
            while(getchar() != '\n');
        }

        printf("Heart rate: ");
        while (scanf("%f", &patients[i].heart_rate) != 1 || patients[i].heart_rate <= 0) {
            printf("Invalid heart rate. Enter again: ");
            while(getchar() != '\n');
        }

        printf("Blood pressure systolic: ");
        while (scanf("%f", &patients[i].bp_systolic) != 1 || patients[i].bp_systolic <= 0) {
            printf("Invalid systolic BP. Enter again: ");
            while(getchar() != '\n');
        }

        printf("Blood pressure diastolic: ");
        while (scanf("%f", &patients[i].bp_diastolic) != 1 || patients[i].bp_diastolic <= 0) {
            printf("Invalid diastolic BP. Enter again: ");
            while(getchar() != '\n');
        }
    }

    // Find highest heart rate and lowest systolic BP
    int idx_high_hr = 0, idx_low_sbp = 0;
    float sum_diastolic = patients[0].bp_diastolic;

    for (int i = 1; i < n; i++) {
        if (patients[i].heart_rate > patients[idx_high_hr].heart_rate)
            idx_high_hr = i;
        if (patients[i].bp_systolic < patients[idx_low_sbp].bp_systolic)
            idx_low_sbp = i;
        sum_diastolic += patients[i].bp_diastolic;
    }

    printf("\nPatient with highest heart rate: %s (HR: %.2f)\n", patients[idx_high_hr].name, patients[idx_high_hr].heart_rate);
    printf("Patient with lowest systolic BP: %s (SBP: %.2f)\n", patients[idx_low_sbp].name, patients[idx_low_sbp].bp_systolic);
    printf("Average diastolic BP: %.2f\n", sum_diastolic / n);

    free(patients);
    return 0;
}