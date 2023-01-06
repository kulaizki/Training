// without ctype.h solution

#include <stdio.h>

int main(void)
{
    char *name, *nPtr;

    printf("Enter a string: ");
    scanf("%s", name);

    nPtr = name;

    while (*nPtr)
    {
        if (*nPtr >= 'A' && *nPtr <= 'Z')
            printf("%c is uppercase\n", *nPtr);
        else if (*nPtr >= 'a' && *nPtr <= 'z')
            printf("%c is lowercase\n", *nPtr);
        else
            printf("%c is not a letter\n", *nPtr);
        
        nPtr++;
    }
}