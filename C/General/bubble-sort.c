#include <stdio.h>

void swap(int *x, int *y) {

    int temp = *x;
    *x = *y;
    *y = temp;

}

void bubbleSort(int arr[], int n) {

    int x, y; n--;

    for (x = 0; x < n; ++x)
    {
        for (y = 0; y < n-x; ++y)
        {
            if (arr[y] > arr[y+1])
            {
                swap(arr+y, arr+y+1);
            }
        }
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
    bubbleSort(arr, 6);
    display(arr, 6);
}