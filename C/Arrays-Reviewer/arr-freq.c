#include <stdio.h>

int main()
{
    // stores the count of each digit | 0-9 (10 elements)
    int count[10] = {0}; // {0} to initialize all elements in the scope of the size to 0
    int n;
        
    printf("Enter n: ");
    scanf("%d", &n);

    while (n) {
        // gets the remainder
        int r = n % 10;
        // increments the count of each digit eg. count[2]++ : frequency of 2 = 1 from 0
        count[r]++;
        // if current digit appeared more than once, then it is a duplicate
        if (count[r] > 1) {
            printf("Duplicate number = %d\n", r);
            // end program early
            return 0;
        }
        // gets to the next digit eg. 1234 /= 10 = 123.4
        n /= 10;
    }
}
