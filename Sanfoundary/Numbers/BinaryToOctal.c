#include<stdio.h>
#include<math.h>

int main(void)
{
    int binary,decimal = 0,octal = 0,remainder = 0;
    int i = 0;

    printf("Enter value for binary digit: ");
    scanf("%d",&binary);

    while ( binary > 0){
        decimal += (binary % 10) * pow(2,i++);
        binary = binary/10;
    }
    printf("\nThe decimal is %ld",decimal);

    i = 1;


    while ( decimal > 0){
        octal += ( decimal % 8) * i;
        decimal /= 8;
        i *= 10;
     }

    printf("\nEquivalent octal = %ld",octal);

    return 0;
}
