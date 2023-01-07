#include<stdio.h>
#include<stdlib.h>
#define MAX 100

//complete the function prototypes
int *createCountArray(int arr[], int n);

int main(){
	int arr[MAX], size;
	int *answer;

	//user inputs
	scanf("%d",&size);
	for(int i=0; i<size; i++){
		scanf("%d",&arr[i]);
	}
   
	//complete the function call
	answer = createCountArray(arr, size);

	//complete the code below to display the result as indicated
	for(int i=0;answer[i]!=-1;i++){
 		printf("Count of %d: %d\n", i, answer[i]);
	}
  
    return 0;
}

int *createCountArray(int arr[], int n){
    int max = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    int *count = (int *)calloc(sizeof(int), max+1);
    for (int i = 0; i < n; i++)
        count[arr[i]]++;
    count[max+1] = -1;
    return count;
}

