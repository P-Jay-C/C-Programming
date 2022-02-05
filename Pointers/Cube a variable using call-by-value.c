//Cube a variable using call-by-value
#include<stdio.h>

int cubeByValue( int n);
int cubeByReference ( int *nPtr);

int main( void )
{
    int number = 5;
    printf( "The original value of the number is %d", number);

    number = cubeByValue(number);
    printf("\nThe new value of the number is %d\n", number);

    int num = 5;
    printf( "\nThe original value of the number is %d", num);

    num = cubeByReference(&num);
    printf("\nThe new value of the number is %d\n", num);

    return 0;
}

int cubeByValue( int n)
{
    return n * n * n;
}

int cubeByReference( int *nPtr )
{
    *nPtr = *nPtr * *nPtr * *nPtr;
}


