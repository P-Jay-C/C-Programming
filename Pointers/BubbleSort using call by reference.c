#include<stdio.h>
#define SIZE 10

void bubbleSort ( int * const arry, const int size);

int main( void )
{
    int a[SIZE] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };

    int i;
    printf("Data items in original order\n");

    for ( i = 0; i < SIZE; i++){
        printf("%4d", a[i]);
    }

    bubbleSort ( a, SIZE);
    printf("\nData items in ascending order\n");

    for ( i = 0; i < SIZE; i++){
        printf("%4d", a[i]);
    }

    printf("\n");

    return 0;
}

void bubbleSort(int *const array, const int size)
{
    void swap( int *element1Ptr, int *element2Ptr);

    int pass;
    int i;

    for ( pass = 0; pass < SIZE- 1 ; pass++)
    {
        for ( i = 0; i < SIZE -1; i++){
            swap( &array[i],&array[i+1] );
        }
    }
}

void swap ( int *element1Ptr, int *element2Ptr)
{
    int hold;
    if ( *element1Ptr > *element2Ptr){
        hold = *element1Ptr;
        *element1Ptr = *element2Ptr;
        *element2Ptr = hold;
    }
}
