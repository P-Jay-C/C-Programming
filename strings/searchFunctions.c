#include<stdio.h>
#include<string.h>

int main( void )
{
  /*  const char *string = "This is a test";
    char char1 = 'a';
    char char2 = 'z';

    if ( strchr(string,char1)){
        printf("\'%c\' was found in %s", char1,string);
    }
    else{
        printf("\'%c' was not found in %s\n\n", char1, string);

    }
*/

    const char* string1 = "The value is 3.14159";
    const char* string2 = "1234567890";

    printf("%s%s\n%s%s\n\n",
           "string1 = ",string1,"string2 = ",string2);

    printf("%s%d\n","The length of the initial segment of string1"
           " containing no characters from string2 = ",strcspn(string1,string2));

    return 0;
    }
