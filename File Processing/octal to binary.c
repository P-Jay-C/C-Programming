#include<stdio.h>
#include<math.h>

long octalToBinary( int octal);

int main(void)
{
    int octalNum;
    long answer;

    printf("Enter the octal number: ");
    scanf("%d",&octalNum);

    answer = octalToBinary ( octalNum );
    printf("The equivalent is %ld\n",answer);

    return 0;
}

long octalToBinary( int octal)
{
    int base = 0;
    long binary = 0;
    int decimal = 0;

    while ( octal > 0){

        decimal = decimal + (octal % 10) * pow(8,base++);
        octal = octal/10;
    }

    base = 1;

    while ( decimal > 0){
        binary = binary + (decimal % 2) * base;
        decimal = decimal /2;

        base = base * 10;
    }

    return binary;
}
