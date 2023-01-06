#include <stdio.h>
#include <stdlib.h>

void fib(int arr[], int n);

int main()
{
    printf("Enter n: ");
    int n;
    scanf("%d", &n);

    int *arr = (int *)malloc(sizeof(int) * n);
    fib(arr, n);
    free(arr);

    return 0;
}

void fib(int arr[], int n) {
    arr[0] = 0;
    arr[1] = 1;

    for (int i = 2; i < n; i++)
        arr[i] = arr[i-2] + arr[i-1];
    for (int i = 0; i < n; i++) {
        if (i % 10 == 0 && i)
            printf("\n");
        printf("%d ", arr[i]);
    }
    if (n % 2 == 0)
        printf("\nMiddle numbers: %d %d\n", arr[n/2-1], arr[n/2]);
    else
        printf("\nMiddle number: %d", arr[n/2]);
}
