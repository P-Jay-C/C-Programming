#include<stdio.h>

int main(void)
{

    char octal[50];
    int i = 0;

    printf("Enter an octal number: ");
    scanf("%s",octal);

    while (octal[i]){

        switch(octal[i]){
            case '0':
                printf("000");break;
            case '1':
                printf("001");break;
            case '2':
                printf("010");break;
            case '3':
                printf("011");break;
            case '4':
                printf("100");break;
            case '5':
                printf("101");break;
            case '6':
                printf("110");break;
            case '7':
                printf("111");break;
            default:
                printf("\nInvalid octal digit %c",octal[i]);
                return 0;
        }
        i++;
    }


    return 0;
}
