#include <stdio.h>
#include <stdbool.h>

void selectionSort(int arr[], int n){
    int i, j, min_idx, temp;
    // i is the number of passes
    // j is the number of traversals in each pass

    for (i = 0; i < n-1; i++) {
        min_idx = i; //assume the first element is the minimum

        for (j = i+1; j < n; j++) { /// Find here the minimum 
            if(arr[j] < arr[min_idx]){ //if arr[j] is less than arr[min_idx]
                min_idx = j; //update min_idx
            }
        }
        // Swap the minimum element with the element in arr[i]
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}
void printArray(int arr[], int size){
    // print the array here
    for (int i=0; i < size; i++){
        printf("%d ", arr[i]);
    }
}
int main(){
    int arr[] = {12, 5, 8, 4, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}