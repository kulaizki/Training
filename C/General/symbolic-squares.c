#include <stdio.h>

int main() {
  
	int input;
  	scanf("%d", &input);
  
  	//process
    long output = 0;
    if (input == 1) {
        output = 1;
    } else if (input > 1) {
        output = (input - 1) * 4;
    }

  	//output
  	printf("%ld", output);
  
	return 0;
}
