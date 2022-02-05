#include<stdio.h>

int main( void  )
{
    int a;
    int *aPtr;

    a = 7;
    aPtr = &a;

    printf("The address of a is %p",&a);
    printf("\nThe value of aPtr is %p", aPtr);
}
