#include<stdio.h>

void main()
{
    static int array[5] = { 200, 400, 600, 800, 1000};
    int sum;

    int addnum(int *ptr);
    sum = addnum(array);

    printf("Sum of all array element = %d\n\n\n",sum);
}

int addnum( int *ptr)
{

    int i,total = 0;

    for ( i = 0; i < 5; i++)
        total = total + *(ptr + i);

    return (total);
}
