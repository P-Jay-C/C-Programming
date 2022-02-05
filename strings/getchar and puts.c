#include<stdio.h>

int main(void)
{

     int i = 0;
     char string[30];

     printf("Enter a string: ");
     gets(string);

     while(string[i] != '\0')
          i++;


     printf("The length of the string is %d\n",i);

     return 0;
}
