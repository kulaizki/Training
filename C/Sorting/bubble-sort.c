#include <stdio.h>

void bubbleSort(int arr[], int n);
void display(int arr[], int n);

int main() {

    int arr[] = {4, 7, 1, 2, 8};
    bubbleSort(arr, 5);

}

void bubbleSort(int arr[], int n) {

    int i, j; n--;
    
    for (i = 0; i < n; ++i) {
        for (j = 0; j < n-i; ++j) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        display(arr, 5);
    }

}

void display(int arr[], int n) {

    printf("Current array: ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

}