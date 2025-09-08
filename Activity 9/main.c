#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    char dataType;

    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the data type (i for int, f for float): ");
    scanf(" %c", &dataType);

    if (dataType == 'i'){

        int *ptrA = (int*)malloc(size * sizeof(int));
        int *ptrB = (int*)calloc(size, sizeof(int));

        for(int i = 0; i < size; i++) {
            ptrA[i] = i * 2; //even values
        }

        for(int i = 0; i < size; i++) {
            ptrB[i] = i * 2 + 1; //odd values
        }

        printf("Even values (malloc):\n");
        for(int i = 0; i < size; i++) {
            printf("%d ", ptrA[i]);
        }
        printf("\n");

        printf("Odd values (calloc):\n");
        for(int i = 0; i < size; i++) {
            printf("%d ", ptrB[i]);
        }
        printf("\n");
    } else if (dataType == 'f') {
        float *ptrA = (float*)malloc(size * sizeof(float));
        float *ptrB = (float*)calloc(size, sizeof(float));

        for(int i = 0; i < size; i++) {
            ptrA[i] = (float)(i + 1);
        }

        for(int i = 0; i < size; i++) {
            ptrB[i] = (float)(i + 1);
        }

        printf("Even values (malloc):\n");
        for(int i = 0; i < size; i++) {
            printf("%.2f ", ptrA[i]);
        }
        printf("\n");

        printf("Odd values (calloc):\n");
        for(int i = 0; i < size; i++) {
            printf("%.2f ", ptrB[i]);
        }
        printf("\n");

        free(ptrA);
        free(ptrB);
        return 0;
    } else {
        printf("Invalid data type entered.\n");
        return 1;
    }
    

    return 0;
}