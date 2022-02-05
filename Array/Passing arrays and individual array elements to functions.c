#include<stdio.h>
#define SIZE 5

void modifyArray ( int b[], int size);
void modifyElement ( int e );

int main( void )
{
    int a[SIZE] = { 0, 1, 2, 3, 4 };
    int i;

    printf("Effects of passing entire array by reference:\n\n""The values of the original array are:\n");
    for( i = 0; i < SIZE; i++){
        printf("%3d",a[i]);
    }

    printf("\n");

    modifyArray( a, SIZE);

    printf("The values of the modified array are: \n");


    for( i = 0; i < SIZE; i++){
        printf("%3d",a[i]);
    }

    printf("The value of a[3] is %d\n", a[3]);
    modifyElement(a[3]);
    return 0;
}



void modifyArray( int b[], int size)
{
    int i;

    for ( i = 0; i < size ; i++){
        b[i] *= 2;
    }
}

void modifyElement( int e)
{
    printf("The value for modified element a[3] is %d: ", e *= 2);
}
