#include<stdio.h>
long convert( int num);

int main(void)
{
    int decimal;
    long binary;

    printf("Enter a decimal number: ");
    scanf("%d",&decimal);

    binary = convert(decimal);

    printf("The equivalent binary digit is %ld\n",binary);

    return 0;
}

long convert( int num)
{
    if ( num != 0){
        return ( num % 10 + convert( num /10));
    }
    else
        return 0;
}
