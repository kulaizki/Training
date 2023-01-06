// ctype solution

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char *name, *nPtr;

    printf("Enter a string: ");
    scanf("%s", name);

    nPtr = name;

    while (*nPtr)
    {
        if (isupper(*nPtr))
            printf("%c is uppercase\n", *nPtr);
        else if (islower(*nPtr))
            printf("%c is lowercase\n", *nPtr);
        else
            printf("%c is not a letter\n", *nPtr);
        
        nPtr++;
    }
}