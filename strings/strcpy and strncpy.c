  #include<stdio.h>
#include<string.h>

int main( void )
{
    char x[] = "Happy Birthday to you";
    char y[25];
    char z[15];

    printf("%s%s\n%s%s\n",
           "The string in array x is ",x,
           "The string in the array y is ",strcpy(z,x));

    strncpy(z,x,14);
    z[15] = '\0';

    printf("The string in array z is %s",z);

    return 0;
}



