#include <stdio.h>

void swap(int *x, int *y) {

    int temp = *x;
    *x = *y;
    *y = temp;

}

void insertionSort(int arr[], int n) {

    int x, y, key;

    for (x = 1; x < n; ++x)
    {
        key = arr[x];
        y = x-1;
        while (y >= 0 && arr[y] > key)
        {
            arr[y+1] = arr[y];
            y--;
        }
        arr[y+1] = key;
    }

}

void display(int arr[], int n) {

    printf("Current array: ");
    for (int i = 0; i < n; ++i)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

}

int main() {

    int arr[] = {4, 9, 1, 3, 2, 7};
    display(arr, 6);
    insertionSort(arr, 6);
    display(arr, 6);
}