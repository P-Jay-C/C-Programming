#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
     char str[100], words[10][30];
     int i = 0, j = 0, k = 0,temp,x,len;

     printf("Enter a string: ");
     scanf("%[^\n]s", str);


     for( i = 0; str[i] != '\0'; i++)
     {
          if(str[i] == ' '){
               words[k][j] = '\0';
               k++;
               j = 0;
          }
          else{
               words[k][j] = str[i];
               j++;
          }
     }

     words[k][j] = '\0';


     for ( i = 0; i < k+1; i++ )
     {
          len = strlen(words[i]);

          for( j = 0, x = len - 1; j < x ;x--, j++)
          {
               temp = words[i][j];
               words[i][j] = words[i][x];
               words[i][x] = temp;
          }
     }


     for( i = 0; i < k + 1; i++)
          printf("%s ", words[i]);


     return 0;
}

