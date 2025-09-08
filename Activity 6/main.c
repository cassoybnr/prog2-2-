#include <stdio.h>
#include <stdlib.h>

void swap(int **a, int *b) {
    //function to swap two numbers using pointers
    int temp;
    temp = **a;
    **a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;
    //declare the pointers
    int *ptrA = &x;
    int **ptrB = &ptrA;

    
    //Display before swapping
    printf("Before swapping\n");
    printf("x = %d\ny = %d\n", x, y);

    swap(ptrB, &y); //pass pointers

    //Display after swapping
    printf("\nAfter swapping\n");
    printf("x = %d\ny = %d\n", x, y);
    return 0;
}