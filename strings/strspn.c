#include<stdio.h>
#include<string.h>

int main( void )
{
    const char *string1 = "The value is 3.141159";
    const char *string2 = "aehi 1sTuv";

    printf("The length of the initial segment of string1"
           " containing only character from string2"
           " = %d", strspn(string1, string2));
}
