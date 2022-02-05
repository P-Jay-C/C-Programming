#include<stdio.h>

void staticArrayInint(void);

int main( void )
{
    printf("First call of each function:\n");
    staticArrayInint();

    printf("\n\nSecond call of each function:\n");
    staticArrayInint();

    return 0;
}

void staticArrayInint( void )
{
    static int array1[3];
    int i;

    printf("\nValues on entering staticArrayInit:\n");

    for ( i = 0; i < 3; i++){
        printf("array[%d] = %d\n", i, array1[i]);
    }

    printf("\nValues on exiting staticArrayInit:\n");

    for ( i = 0; i <= 2; i++){
        printf("array[%d] = %d \n", i, array1[i] += 5);
    }

}

