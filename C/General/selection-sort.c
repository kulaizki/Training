#include <stdio.h>

void swap(int *x, int *y) {

    int temp = *x;
    *x = *y;
    *y = temp;

}

void selectionSort(int arr[], int n) {

    int x, y, min_idx;

    for (x = 0; x < n-1; ++x)
    {
        min_idx = x;
        for (y = x+1; y < n; ++y)
        {
            if (arr[y] < arr[min_idx])
            {
                min_idx = y;
            }
        }
        swap(arr+x, arr+min_idx);
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
    selectionSort(arr, 6);
    display(arr, 6);
}