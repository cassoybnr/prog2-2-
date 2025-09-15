#include <stdio.h>
#include <stdlib.h>

int main() {
    int* ptr;
    int n;

    printf("Enter size of the array: ");
    scanf("%d", &n);

    ptr = (int*)malloc(n * sizeof(int));
    if (ptr == NULL) {
        printf("Memory not allocated\n");
    } else {
        for (int i = 0; i < n; i++) {
            ptr[i] = (i+1) * 3;
        }
        printf("Initial array elements: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", ptr[i]);
        }
        printf("\n");
        int* temp;
        int m;
        
        printf("Enter new size of the array: ");
        scanf("%d", &m);

        temp = (int*)realloc(ptr, m * sizeof(int));
        if (temp == NULL) {
            printf("Memory not reallocated\n");
        } else {
            ptr = temp;
            for (int i = n; i < m; i++) {
                ptr[i] = (i + 1) * 3;
            }
            printf("Reallocated array elements: ");
            for (int i = 0; i < m; i++) {
                printf("%d ", ptr[i]);
            }
            printf("\n");
            
        }

        free(ptr);
    }

    return 0;
}