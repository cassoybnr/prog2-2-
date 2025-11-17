#include <stdio.h>
#include <stdbool.h>

void insertionSort(int arr[], int n){
    int i, j, key;
    for (i = 1; i < n; i++) {
        key = arr[i]; // Element to be inserted
        j = i - 1;
        // i is for traversal
        // j is for comparison
        
        while (j >= 0 && arr[j] > key) {
            // Move elements greater than the key to the right
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}


void printArray(int arr[], int size){
    // Print the array here
    for (int i=0; i < size; i++){
        printf("%d ", arr[i]);
    }
}
int main(){
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted array:\n");
    printArray(arr, n);

    insertionSort(arr, n);

    printf("Sorted array:\n");
    printArray(arr, n);
    return 0;
}