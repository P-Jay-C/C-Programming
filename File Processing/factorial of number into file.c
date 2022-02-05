#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int number;
    int decimal;;
    int binary = 0;
    int remainder;
    int base = 1;

    printf("Enter number: ");
    scanf("%d",&number);

    decimal = number;

    while ( number > 0){
        remainder = number % 2;
        binary = binary + (remainder * base);

        number = number/2;
        base = base * 10;

    }

    printf("\nThe decimal number = %d",decimal);
    printf("\nIt's binary form = %d\n",binary);

    return 0;
}
