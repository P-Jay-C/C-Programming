#include<stdio.h>

int main(void)
{
    char hexdec[100];
    int i = 0,remainder,decimal;
    printf("Enter a decimal number: ");
    scanf("%d",&decimal);

    while (decimal != 0){

        remainder = decimal % 16;
        if ( remainder < 10)
            hexdec[i++] = remainder + 48;
        else
            hexdec[i++] = remainder + 55;

        decimal = decimal/16;
    }

    int j;

    for(j = i-1; j >= 0; j--){
        printf("%c",hexdec[j]);
    }

    return 0;
}
