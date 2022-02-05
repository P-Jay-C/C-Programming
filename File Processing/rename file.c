#include<stdio.h>
#include<stdlib.h>

int main( void )
{
    FILE * fp;
    rename("Number.txt","Decimals");

    if ( rename("Number.txt","Decimals") == 0)
        printf("File renamed successfully");




    return 0;
}
