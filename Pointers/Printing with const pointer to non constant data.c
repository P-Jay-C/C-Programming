#include<stdio.h>

void printCharacters( const char *stringPtr);

int main( void )
{
    char string[] = "This is P.Jay";

    printf("The string is:\n");
    printCharacters( string );

    printf("\n");
    return 0;
}

void printCharacters( const char *stringPtr)
{
    for (; *stringPtr != '\0';++stringPtr){
        printf("%c",*stringPtr);
    }
}
