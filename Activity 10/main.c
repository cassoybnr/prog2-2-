#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    char dataType;
    int new_size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the data type (i for int, f for float): ");
    scanf(" %c", &dataType);

    if (dataType == 'i'){

        int *ptrA = (int*)malloc(size * sizeof(int));
        

        for(int i = 0; i < size; i++) {
            ptrA[i] = i + 1; //even values
        }

        printf("The values (malloc):\n");
        for(int i = 0; i < size; i++) {
            printf("%d ", ptrA[i]);
        }
        printf("\n");
        free(ptrA);
        
        
    } else if (dataType == 'f') {
        float *ptrA = (float*)malloc(size * sizeof(float));
       

        for(int i = 0; i < size; i++) {
            ptrA[i] = (float)(i + 1);
        }

       

        printf("Even values (malloc):\n");
        for(int i = 0; i < size; i++) {
            printf("%.2f ", ptrA[i]);
        }
        printf("\n");


        free(ptrA);
        return 0;
    } else {
        printf("Invalid data type entered.\n");
        return 1;
    }
    
    printf("Enter the new size of the array: ");
    scanf("%d", &new_size);
    if (dataType == 'i') {
        int *ptrA = (int*)realloc(NULL, new_size * sizeof(int));
        
        for(int i = 0; i < new_size; i++) {
            ptrA[i] = i + 1; //even values
        }

        printf("The values (realloc):\n");
        for(int i = 0; i < new_size; i++) {
            printf("%d ", ptrA[i]);
        }
        printf("\n");
        free(ptrA);
        
    } else if (dataType == 'f') {
        float *ptrA = (float*)realloc(NULL, new_size * sizeof(float));
       
        for(int i = 0; i < new_size; i++) {
            ptrA[i] = (float)(i + 1);
        }

       

        printf("Even values (realloc):\n");
        for(int i = 0; i < new_size; i++) {
            printf("%.2f ", ptrA[i]);
        }
        printf("\n");
        free(ptrA);

    } else {
        printf("Invalid data type entered.\n");
        return 1;
    }
    return 0;
}