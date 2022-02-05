#include<stdio.h>
size_t getSize ( int *ptr);

int main( void )
{
    int array[20];

    printf("The number of bytes in the array is %d"
           "\nThe number of bytes returned by getSize is %d\n",sizeof(array),getSize(array));

    return 0;
}

size_t getSize( int *ptr)
{
    return sizeof(ptr);
}
