#include<stdio.h>
#include<ctype.h>
#include<string.h>

char caps_check( char *string);

int main()
{
     char string[20], letter;

     printf("Enter a string to find it's first capital letter: ");
     scanf("%s",string);

     letter = caps_check(string);
     if(letter == 0){
          printf("No capital letter is present in %s\n",string);
     }
     else
     {
          printf("The first capital letter in %s is %c",string,letter);
     }

     return 0;
}

char caps_check(char *string)
{
     int i = 0;
     while(string[i] != '\0'){
          if(isupper(string[i])){
               return string[i];
          }
          else
               i++;
     }
}



