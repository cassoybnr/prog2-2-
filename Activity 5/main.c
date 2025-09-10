#include <stdio.h>

int main() {
    int x, i, j, space;

    printf("Enter a number: ");
    scanf("%d", &x);

    for(i = 1; i <= x; i++) {

        for(space = 1; space <= x - i; space++) {
            printf(" ");
        }
        
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}