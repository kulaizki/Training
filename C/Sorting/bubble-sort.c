#include <stdio.h>

void bubbleSort(int arr[], int n);
void display(int arr[], int n);

int main() {

    int arr[] = {4, 7, 1, 2, 8, 99};
    display(arr, 6);
    bubbleSort(arr, 6);
    display(arr, 6);

}

void bubbleSort(int arr[], int n) {

    n--;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n-i; ++j) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

}

void display(int arr[], int n) {

    printf("Current array: ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

}