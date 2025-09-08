#include <stdio.h>

int main() {
    int odd[] = {1, 3, 5, 7, 9};
    int temp[5];
    int i = 0;
    int j = 0;

    printf("size %zu bytes\n", sizeof(odd));

    for(i=0; i<sizeof(odd)/sizeof(int);i++) {
        temp [i] = odd[i];
    }

    for(i = sizeof(odd) / sizeof(int) - 1; i >= 0; i--) {
        odd[j] = temp[i];
        j++;
    }

    printf("Revered array: ");
    for(i = 0; i < sizeof(odd) / sizeof(int) ; i++) {
        printf("%d ", odd[i]);
    }
    
    return 0;
}