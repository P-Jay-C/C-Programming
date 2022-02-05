#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int digit ( char c);
int main(void)
{
    char romNum[1000];
    int i = 0;
    long decimal = 0;


    printf("Enter a roman numeral: ");
    scanf("%s",romNum);

    while(romNum[i]){

        if (digit(romNum[i]) < 0){
            printf("Invalid character %c\n",romNum[i]);
            exit(1);
        }

        if( (strlen(romNum)-1) > 2){
            if ( digit(romNum[i]) < digit(romNum[i+2])){
                printf("Invalid roman number.");
                return 0;
            }
        }

        if ( digit(romNum[i]) >= digit(romNum[i+1]) ){
            decimal += digit(romNum[i]);
        }
        else{
            decimal += digit(romNum[i+1]) - digit(romNum[i]);
            i++;
        }
        i++;
    }

    printf("The equivalent decimal = %ld\n",decimal);


    return 0;
}

int digit ( char c){

    int value;

    switch(c){

        case 'I':
        case 'i':
            value = 1;break;
        case 'V':
        case 'v':
            value = 5;break;
        case 'X':
        case 'x':
            value = 10;break;
        case 'L':
        case 'l':
            value = 50;break;
        case 'C':
        case 'c':
            value = 100;break;
        case 'D':
        case 'd':
            value = 500;break;
        case 'M':
        case 'm':
            value = 1000;break;
        case '\0':
            value = 0;break;
        default :
            value = -1; break;
    }
    return value;
}
