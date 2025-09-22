#include <stdio.h>
#include <stdlib.h>

// Function to check if a value exists in an array
int existsInArray(int *array, int size, int value) {
    for (int i = 0; i < size; i++) {
        if (array[i] == value) {
            return 1; // Exists
        }
    }
    return 0; // Does not exist
}


int main() {
int n1, n2;
int *arr1, *arr2;
int *unionArr = NULL;       
int unionSize = 0;

printf("Enter the size of the first array: ");
scanf("%d", &n1);
printf("Enter the size of the second array: ");
scanf("%d", &n2);

// Allocate memory for two arrays
arr1 = malloc(n1 * sizeof(int));
arr2 = malloc(n2 * sizeof(int));

// Input values for first array
printf("Enter %d elements for Array 1:\n", n1);
for (int i = 0; i < n1; i++) {
//    printf("", i);
    scanf("%d", &arr1[i]);
}

// Input values for second array
printf("Enter %d elements for Array 2:\n", n2);
for (int i = 0; i < n2; i++) {
//    printf("arr2[%d]: ", i);
    scanf("%d", &arr2[i]);
}

// Find union of odd numbers from both arrays
for (int i = 0; i < n1; i++) {
    if (arr1[i] % 2 != 0 && !existsInArray(unionArr, unionSize, arr1[i])) {
        unionArr = realloc(unionArr, (unionSize + 1) * sizeof(int));
        unionArr[unionSize++] = arr1[i];
    }
}
for (int i = 0; i < n2; i++) {
    if (arr2[i] % 2 != 0 && !existsInArray(unionArr, unionSize, arr2[i])) {
        unionArr = realloc(unionArr, (unionSize + 1) * sizeof(int));
        unionArr[unionSize++] = arr2[i];
    }
}


if (unionSize == 0) {
printf("\nNo odd number unions found.\n");
} else {
// Display result
printf("[");
for (int i = 0; i < unionSize; i++) {
    printf("%d", unionArr[i]);
    if (i < unionSize - 1) {
        printf(", ");
    }
}
printf("]");
}

// Free memory
free(arr1);
free(arr2);

return 0;
}