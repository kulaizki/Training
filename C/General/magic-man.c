#include <stdio.h>
#include <stdlib.h>

//Function prototype
int* createNumberArray(int n);
void display(int arr[]);

int main() {

  	int num;
  	int* answer;
  
    	//user input
  	scanf("%d",&num);
  
  	//function call
  	answer = createNumberArray(num);
  	
    display(answer);
    return 0;
}

int* createNumberArray(int n){
    int n2 = n;
    int ctr = 0;
    while (n2) {
        ctr++;
        n2 /= 10;
    }
    
    int* newArr = (int *) malloc(sizeof(int) * ctr + 1);
    for (int i = ctr-1; i >= 0; i--) {
        newArr[i] = n % 10;
        n /= 10;
    }
    
    newArr[ctr] = -1;
    
    return newArr;
}

void display(int arr[]){
	int x;
	printf("{");
  	for(x=0;arr[x]!=-1;x++){
      	printf("%d",arr[x]);
   		if(arr[x+1]!=-1){
          	printf(",");
        }
    }
  	printf("}");
}
