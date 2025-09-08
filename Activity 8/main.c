#include <stdio.h>

int main() {
    int sample[4] = {10, 20, 30, 40}; // Define an array of integers
    int *p = sample; // Point to the first element of the array

    // Traverse the whole array using a pointer
    // The pointer starts from the first element of the array and goes to the last
    for (int i = 0; i < 4; i++) {
        printf("Element %d: %d\n", i, *(p + i)); // Use pointer arithmetic to access elements
    }
    
    return 0;
}