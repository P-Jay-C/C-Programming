#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
     char str[100];
     int i, count = 1;

     printf("Enter the string: ");
     scanf("%[^\n]s",str);

     for( i = 0; str[i] != '\0'; i++)
     {
          if(str[i] == ' ' && str[i+1] != ' ')
               count++;
     }

     printf("\nThere are %d words in the string.\n",count);





     return 0;
}
