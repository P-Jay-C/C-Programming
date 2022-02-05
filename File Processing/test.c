#include<stdio.h>
#include<stdlib.h>

int digit( char ch);
int main(void)
{
    int i= 0;
    char rom[1000];
    long int num = 0;

    printf("Enter the roman numerals(IN CAPS): ");
    scanf("%s",rom);

    while( rom[i] ){

        if ( digit(rom[i] < 0 )){
            printf("\nInvalid character %c",rom[i]);
            exit(1);
        }

        if ( digit(rom[i]) >= digit(rom[i+1])){
            num = num + digit(rom[i]);
        }
        else{
            num = num + digit(rom[i+1]) - digit(rom[i]);
            i++;
        }
        i++;
    }
    printf("\nThe decimal of the roman numeral: %ld\n",num);

    return 0;
}

int digit( char ch)
{
    int value = 0;

    switch(ch){

    case 'I':
        value = 1;
        break;
    case 'V':
        value = 5;
        break;
    case 'X':
        value = 10;
        break;
    case 'L':
        value = 50;
        break;
    case 'C':
        value = 100;
        break;
    case  'M':
        value = 500;
        break;
    case 'D':
        value = 1000;
        break;
    case '\0':
        value = 0;
        break;
    default:
        value = -1;
    }

    return value;
}
