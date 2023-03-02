#include <stdio.h>

void selectionSort(int arr[], int n);
void display(int arr[], int n);

int main() {

    int arr[] = {4, 7, 1, 2, 8, 99};
    display(arr, 6);
    selectionSort(arr, 6);
    display(arr, 6);

}

void selectionSort(int arr[], int n) {

    int i, j, min_index;
    
    for (i = 0; i < n-1; ++i) {
        min_index = i;
        for (j = i+1; j < n; ++j) {
            if (arr[j] < arr[min_index]) min_index = j;
        }
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }

}

void display(int arr[], int n) {

    printf("Current array: ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

}