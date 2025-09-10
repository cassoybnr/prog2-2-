#include <stdio.h>

void sort(int *arr, int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (*(arr+i) > *(arr+j)) {
                temp = *(arr+i);
                *(arr+i) = *(arr+j);
                *(arr+j) = temp;
            }
        }
    }
}

int main() {
    int allGrades[] = {85, 74, 60, 90, 72, 68, 88, 55};
    int n = sizeof(allGrades)/sizeof(allGrades[0]);
    int failingGrades[10]; // assuming max 10 failing grades
    int *pAll = allGrades;
    int *pFail = failingGrades;
    int **ppFail = &pFail;
    int count = 0;

    // Transfer failing grades using pointers and double pointers
    for (int i = 0; i < n; i++) {
        if (*(pAll + i) < 75) {
            **ppFail = *(pAll + i);
            (*ppFail)++;
            count++;
        }
    }

    // Sort the failing grades
    sort(failingGrades, count);

    // Print sorted failing grades
    printf("Sorted failing grades:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", *(failingGrades + i));
    }
    printf("\n");

    return 0;
}