#include <stdio.h>

void sort(int *arr, int n) {
    int i, j, temp;
    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-i-1; j++) {
            if(*(arr+j) > *(arr+j+1)) {
                temp = *(arr+j);
                *(arr+j) = *(arr+j+1);
                *(arr+j+1) = temp;
            }
        }
    }
}

int main() {
    int allGrades[] = {85, 74, 60, 90, 72, 88, 55, 70};
    int n = sizeof(allGrades)/sizeof(allGrades[0]);
    int failingGrades[10]; //set to 10
    int *ptrA = allGrades;
    int *ptrB = failingGrades;
    int **ptrC = &ptrA;
    int count = 0;

    // transfer failing grades using pointers and double pointers
    for(int i = 0; i < n; i++) {
        if(**ptrC < 75) {
            *ptrB = **ptrC;
            ptrB++;
            count++;
        }
        (*ptrC)++;
    }

    sort(failingGrades, count);

    printf("Sorted failing grades:\n");
    for(int i = 0; i < count; i++) {
        printf("%d ", *(failingGrades + i));
    }
    printf("\n");

    return 0;
}