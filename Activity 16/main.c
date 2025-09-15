#include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

enum Day { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

int main() {
    enum Day today;
    today = Monday;
    int n;
    printf("Enter a number from 0-6: ");
    scanf("%d", &n);

    switch (n) {
        case Sunday:
            printf("That day is Sunday.\n");
            break;
        case Monday:
            printf("That day is Monday.\n");
            break;
        case Tuesday:
            printf("That day is Tuesday.\n");
            break;
        case Wednesday:
            printf("That day is Wednesday.\n");
            break;
        case Thursday:
            printf("That day is Thursday.\n");
            break;
        case Friday:
            printf("That day is Friday.\n");
            break;
        case Saturday:
            printf("That day is Saturday.\n");
            break;
        default:
            printf("Invalid day.\n");
    }

    return 0;
}