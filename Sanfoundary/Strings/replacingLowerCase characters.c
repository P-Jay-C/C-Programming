#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(void)
{
     char str[10];
     int i, uppercase = 0, lowercase = 0, digit = 0, symbol = 0;

     printf("Enter a string: ");
     gets(str);

     for( i = 0; str[i] != '\0'; i++){

          if(str[i] >= '0' && str[i] <= 57)
               digit++;
          else
               if(str[i] >= 65 && str[i] <= 90)
                    uppercase++;
          else
               if(str[i] >= 97 && str[i] < 122)
                    lowercase++;
          else
               symbol++;
     }


     return 0;
}
