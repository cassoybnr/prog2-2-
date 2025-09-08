#include <stdio.h>

void swap(int **ptrB, int *y) {
    
    **ptrB = *y;
}

int main() {
    int x = 5, y = 10;
    //declare the pointers
    int *ptrA = &x;
    int **ptrB = &ptrA;

    //Display before swapping
    printf("Before swapping\n");
    printf("x = %d\ny = %d\n", x, y);
    printf("ptrA: %d", *ptrA);

    swap(ptrB, &y); //pass pointers

    //Display after swapping
    printf("\nAfter swapping\n");
    printf("x = %d\ny = %d\n", x, y);
    printf("ptrA: %d", *ptrA);

    return 0;
}