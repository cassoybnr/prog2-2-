#include <stdio.h>
#include <string.h>

union Data {
    int i;
    float f;
    char str[20];
};

int main(){
    union Data data;
    int choice;
    printf("Select the type of data to enter:\n1. Integer\n2. Float\n3. String\n");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter an integer: ");
            scanf("%d", &data.i);
            printf("\nMembers of the union:\n");
            printf("integer: %d\n", data.i);
            printf("float: %.2f\n", data.f);
            printf("string: %s\n", data.str);
            break;
        case 2:
            printf("Enter a float: ");
            scanf("%f", &data.f);
            printf("\nMembers of the union:\n");
            printf("integer: %d\n", data.i);
            printf("float: %.2f\n", data.f);
            printf("string: %s\n", data.str);
            break;
        case 3:
            printf("Enter a string: ");
            scanf("%s", data.str);
            printf("\nMembers of the union:\n");
            printf("integer: %d\n", data.i);
            printf("float: %.2f\n", data.f);
            printf("string: %s\n", data.str);
            break;
        default:
            printf("Invalid choice\n");
            return 1;
    }

    

    printf("Size of union: %zu bytes\n", sizeof(data));
}