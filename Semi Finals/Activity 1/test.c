#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct VitalSigns {
    float heart_rate;
    float blood_pressure_systolic;
    float blood_pressure_diastolic;
};

struct Patient {
    char name[20];
    int age;
    struct VitalSigns vital_signs;
};

int main() {
    int n, i;
    struct Patient *patients;

    printf("Welcome to the Hospital Patient Monitoring System\n");
    printf("\nEnter the number of patients: ");
    while (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Enter a positive integer: ");
        while(getchar() != '\n');
    }

    patients = (struct Patient*)malloc(n * sizeof(struct Patient));
    if (!patients) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("\nPatient %d:\n", i + 1);

        printf("Name: ");
        while (getchar() != '\n');
        fgets(patients[i].name, sizeof(patients[i].name), stdin);
        patients[i].name[strcspn(patients[i].name, "\n")] = 0;

        while (1) {
            printf("Age: ");
            if (scanf("%d", &patients[i].age) == 1 && patients[i].age > 0) {
                break;
            } else {
                printf("Invalid age. Please enter a positive integer.\n");
                while (getchar() != '\n');
            }
        }

        while (1) {
            printf("Heart Rate: ");
            if (scanf("%f", &(patients + i)->vital_signs.heart_rate) == 1 && (patients + i)->vital_signs.heart_rate > 0) {
                break;
            } else {
                printf("Invalid heart rate. Please enter a positive value.\n");
                while (getchar() != '\n');
            }
        }

        while (1) {
            printf("Blood Pressure Systolic: ");
            if (scanf("%f", &(patients + i)->vital_signs.blood_pressure_systolic) == 1 && (patients + i)->vital_signs.blood_pressure_systolic > 0) {
                break;
            } else {
                printf("Invalid systolic BP. Please enter a positive value.\n");
                while (getchar() != '\n');
            }
        }

        while (1) {
            printf("Blood Pressure Diastolic: ");
            if (scanf("%f", &(patients + i)->vital_signs.blood_pressure_diastolic) == 1 && (patients + i)->vital_signs.blood_pressure_diastolic > 0) {
                break;
            } else {
                printf("Invalid diastolic BP. Please enter a positive value.\n");
                while (getchar() != '\n');
            }
        }
    }

    int highestHRIndex = 0;
    for (i = 1; i < n; i++) {
        if ((patients + i)->vital_signs.heart_rate > (patients + highestHRIndex)->vital_signs.heart_rate) {
            highestHRIndex = i;
        }
    }

    int lowestSBPIndex = 0;
    for (i = 1; i < n; i++) {
        if ((patients + i)->vital_signs.blood_pressure_systolic < (patients + lowestSBPIndex)->vital_signs.blood_pressure_systolic) {
            lowestSBPIndex = i;
        }
    }

    float totalDiastolicPressure = 0;
    for (i = 0; i < n; i++) {
        totalDiastolicPressure += (patients + i)->vital_signs.blood_pressure_diastolic;
    }
    float averageDiastolicPressure = totalDiastolicPressure / n;

    printf("\n--- Results ---\n");
    printf("Patient with the highest heart rate:\n");
    printf("Name: %s, Heart Rate: %.2f bpm\n", (patients + highestHRIndex)->name, (patients + highestHRIndex)->vital_signs.heart_rate);

    printf("\nPatient with the lowest systolic blood pressure:\n");
    printf("Name: %s, Systolic BP: %.2f mmHg\n", (patients + lowestSBPIndex)->name, (patients + lowestSBPIndex)->vital_signs.blood_pressure_systolic);

    printf("\nAverage diastolic pressure of all patients: %.2f mmHg\n", averageDiastolicPressure);

    free(patients);
    return 0;
}