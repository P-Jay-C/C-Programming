#include<stdio.h>
#include<string.h>

int main( void )
{
    const char *string = "This is a test";
    char cha1 = 'a';
    char char2 = 'z';

    if ( strchr(string, cha1))
        printf("The character %c was found.\n",cha1);
    else
        printf("The character %c was not found\n", cha1);

    if ( strchr(string, char2))
        printf("The character %c was found\n\n");
    else
        printf("The character %c was not found\n\n");


        const char *string1 = "The value is 3.14159";
        const char *string2 = "123456789";

        printf("The length of initial string1 without any character"
               "from string two = %d", strcspn(string1, string2));


    return 0;
}

