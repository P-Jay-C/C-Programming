#include<stdio.h>
#include<string.h>

int main( void )
{
    const char *string1 = "abcdefabcdef";
    const char *string2 = "def";

    printf("%s%s\n%s%s\n%s%s%s",
           "string1 = ",string1,
           "string2 = ", string2,
           "The remainder of string1 beginning with the",
           " first occurrence of string2 is: ",strstr(string1,string2));

    char string[] = "This is a sentence with 7 tokens";
    char *tokenPtr;

    printf( "\n\n%s\n%s\n\n%s\n",
           "The string to be tokenized is:",string,
           "The tokens are:");

    tokenPtr = strtok( string, " ");
    while ( tokenPtr != NULL ){
        printf( "%s\n", tokenPtr);
        tokenPtr = strtok( NULL, " ");
    }

    printf("\nString = %s", string);
    return 0;
}
