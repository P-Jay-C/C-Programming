#include<stdio.h>

void printArray ( const int a[][3]);

int main( void )
{
    int j;
    int array1[2][3] = { { 1, 2, 3}, { 4, 5, 6} };
    int array2[2][3] = { 1, 2, 3, 4, 5};
    int array3[2][3] = { { 1, 2}, {4} };

    printArray(array1);

    printf("\nValues in array2 by row are:\n");
    printArray(array2);

    printf("\nValues in array3 by row are:\n");
    printArray(array3);
}

void printArray( const int a[][3])
{
    int i;
    int j;

    for ( i = 0; i < 2; i++){
        for ( j = 0; j < 3; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
