#include <stdbool.h>
#include <stdio.h>

void bubbleSort(int arr[], int n){
    int i, j, temp;
    // i is the number of passes
    // j is the number of traversals in each pass
    


    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) { //-1 so that the last element is not compared
            // sort here
            if(arr[j] > arr [j+1]){ //swapping if arr[j] is greater than arr[j+1]
                temp = arr[j]; //store the value of arr[j] in temp
                arr[j] = arr[j+1]; //assign the value of arr[j+1] to arr[j]
                arr[j+1] = temp; //assign the value of temp to arr[j+1]
            }
        }
    }
}

void printArray(int arr[], int size){
    // print the array here
    for (int i=0; i < size; i++){
        printf("%d ", arr[i]);
    }
}

int main(){
    int arr[] = {8, 3, 2, 12, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}