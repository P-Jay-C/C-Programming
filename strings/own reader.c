#include<stdio.h>

void reverse( const char *const sPtr);
int main ( void )
{
    char sentence[80];

    printf("Enter a text: ");
    fgets( sentence, 80, stdin);

    printf("\nThis is the printed text in reverse order.\n");
    reverse(sentence);

    puts("");
    return 0;
}

void reverse( const char *const sPtr)
{
    if ( sPtr[0] == '\0'){
        return;
    }
    else{
        reverse(&sPtr[1]);
        putchar(sPtr[0]);
    }
}
