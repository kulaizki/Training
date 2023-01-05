#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 50

void display(int arr[]);
int *sorting_souls(int arr[]);

int main() {
    int list[MAX_SIZE];

    printf("Enter number of souls: ");
    scanf("%d", &list[0]);

    printf("Enter soul scores: ");
    for(int i = 1; i <= list[0]; ++i) {
        scanf("%d", &list[i]);
    }

    printf("Initial soul list: ");
    display(list);
    
    printf("Sorted soul list: ");
    int *souls = sorting_souls(list);
    display(souls);

    free(souls);

    return 0;
}

void display(int arr[]) {
    printf("[");
    for(int i = 1; i <= arr[0]; ++i) {
        printf("%d", arr[i]);
        if(i < arr[0]) {
            printf("|");
        }
    }
    printf("], SOUL COUNT: %d\n", arr[0]);
}

int *sorting_souls(int arr[]) {
    int max1 = INT_MIN,
        max2 = INT_MIN,
        ctr = 1;
    
    for (int i = 1; i <= arr[0]; i++) {
        if (arr[i] > max1)
            max1 = arr[i];
    }
    for (int i = 1; i <= arr[0]; i++) {
        if (arr[i] > max2 && arr[i] < max1) {
            max2 = arr[i];
            ctr = i;
        }
    }

    int *sorted_souls = (int *)malloc(sizeof(int) * arr[0] - ctr+1),
        count = 1;
    sorted_souls[0] = arr[0] - ctr + 1;
    for (int i = ctr; i <= arr[0]; i++)
        sorted_souls[count++] = arr[i];

    return sorted_souls;
}
