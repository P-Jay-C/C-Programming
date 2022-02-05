#include<stdio.h>
#include<stdlib.h>

int main( void )
{
    const char *string = "51.2% are  admitted";

    double d;
    char *stringPtr;

    d = strtod(string, &stringPtr);

    printf("The string \"%s\" is converted to the \n", string);
    printf("double value %.2f and the string \"%s\"\n\n\n", d, stringPtr);

    long int x;
    const char *tring = "1234567abc";
    char *tringPtr;

    x = strtol(tring, &tringPtr, 0);
    printf("The converted string is %ld\n");
    printf("The remainder is %s", tringPtr);
    printf("\nX + 2 = %ld", x + 2);
    return 0;
}
