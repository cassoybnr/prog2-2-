#include <stdio.h>
#include <stdlib.h>

int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int *ptr = (int *)malloc(size * sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < size; i++) {
        ptr[i] = (i + 1) * 5;
    }

    printf("Elements of the dynamic array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += ptr[i];
    }
    printf("Sum of the elements: %d\n", sum);

    free(ptr);
    return 0;
}