#include <stdio.h>

void swap(int *x, int *y) {
    //function to swap two numbers using pointers
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 5, b = 10;
    //declare the pointers
    int * ptr1 = &a;
    int * ptr2 = &b;

    //Display before swapping
    printf("Before swapping\n");
    printf("a = %d\nb = %d\n", a, b);

    swap(&a, &b); //pass pointers

    //Display after swapping
    printf("\nAfter swapping\n");
    printf("a = %d\nb = %d\n", a, b);
    return 0;
}