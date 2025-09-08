#include <stdio.h>

int main() {
    int sample[4] = {10, 20, 30, 40}; // Define an array of integers
    int i = 0, *p = sample;
    int (*ptr)[] = &sample; // Pointer to the entire array
    

    for (int i = 0; i < sizeof(sample)/sizeof(sample[0]); i++) {
        printf("Element %d: %d\n", i + 1, *(p+1));
    }
    

    return 0;
}