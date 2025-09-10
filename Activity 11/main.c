#include <stdio.h>
#include <stdlib.h>

int main(){
    int* ptr;
    int size = 4; 

    ptr = (int*)malloc(size * sizeof(int));

    if(ptr == NULL){
        printf("Memory not allocated\n");
    } else {
        printf("Memory successfully allocated using 'malloc'.\n");
        for (int i = 0; i < size; i++){
            ptr[i] = i + 1;
        }

        printf("The allocated memory contains:\n");
        for (int i = 0; i < size; i++){
            printf("%d ", ptr[i]);
        }
        printf("\n");
    }

    free(ptr);

    return 0;

}