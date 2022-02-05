#include<stdio.h>
#include<math.h>

int main( void )
{
    long binary1,binary2;
    int i = 0,sum[100],remainder = 0;

    printf("Enter a number: ");
    scanf("%d",&binary1);
    printf("Enter binary number2: ");
    scanf("%d",&binary2);

    while( binary1 != 0 || binary2 != 0){

        sum[i++] = ( binary1 % 10 + binary2 % 10 + remainder)%2;
        remainder = ( binary1 % 10 + binary2 % 10 + remainder)/2;

        binary1 = binary1/10;
        binary2 = binary2/10;
    }

    if( remainder != 0)
        sum[i++] = remainder;

    --i;

    while ( i >= 0)
        printf("%d",sum[i--]);

    return 0;
}
