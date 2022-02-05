//Converting a string to upper case using a non - constant pointer to non-constant data
#include<stdio.h>
#include<ctype.h>

void convertToUppercase ( char *stringPtr);
int main()
{
    char string[] = "characters and $32.98";

    printf("The string before conversion is: %s",string);
    convertToUppercase(string);

    printf("\nThe string after conversion is: %s\ns", string);
    return 0;
}

void convertToUppercase( char *stringPtr)
{
    while ( *stringPtr != '\0'){
        if( islower(*stringPtr) ){
            *stringPtr = toupper( *stringPtr);
        }
        ++stringPtr;
    }
}


