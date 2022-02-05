#include<stdio.h>
#include<string.h>

int main( void )
{
    char data[25];

    FILE *fpointer;

    fpointer = fopen("jerry.txt","w");

    if ( fpointer == NULL){
        printf("Empty file.");
    }
    else{

        printf("Enter a string to be read: ");
        gets(data);

        fputs(data,fpointer);
        printf("string stored successfully");

        fclose(fpointer);
    }


    return 0;
}
