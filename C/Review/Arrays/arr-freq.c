#include <stdio.h>

int main()
{
    int count[10] = {0};
    int n;
        
    printf("Enter n: ");
    scanf("%d", &n);

    while (n) {
        int r = n % 10;
        count[r]++;
        if (count[r] > 1) {
            printf("Duplicate number = %d\n", r);
            return 0;
        }
        n /= 10;
    }
}
