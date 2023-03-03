#include <stdio.h>

void insertionSort(int arr[], int n);
void display(int arr[], int n);

int main() {

    int arr[] = {4, 7, 1, 2, 8, 99};
    insertionSort(arr, 6);

}

void insertionSort(int arr[], int n) {

    int i, j, key;

    for (int i = 1; i < n; ++i) {
        key = arr[i];
        j = i-1;
        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
        display(arr, n);
    }

}

void display(int arr[], int n) {

    printf("Current array: ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

}