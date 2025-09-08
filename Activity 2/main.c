#include <stdio.h>

void main() {
    int ages[] = {19, 20, 19, 17, 21, 18, 18, 20, 19, 17};
    int x = 0;
    int count = 0;
    int n = sizeof(ages) / sizeof(ages[0]);
    //Search for an age:

    printf("Enter a age: ");
    scanf("%d", &x);

    //Calculate how many student have that age
    for (int i = 0; i < n; i++) {
        if (ages[i] == x) {
            count++;
        }
    }

    //Display 
    printf("There are %d number of students with age: %d", count, x);
}