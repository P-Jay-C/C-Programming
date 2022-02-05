#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
     int i =0, j = 0, k = 0;
     char str[100], str1[100][100], temp;

     printf("Enter the string: ");
     scanf("%[^\n]s",str);

     for ( i = 0; str1[i] != '\0'; i++)
     {
          if(str[i] == ' '){

               str1[i] = '\0';
               k++;
               j=0;
          }
          else{
               str1[k][j] = str[i];
               j++;
          }
     }

     str1[k][j] = '/0';

     //reverses each word of a given string

     for ( i = 0; i < k+1; i++)
     {
          x = strlen(str1[i]) - 1;

          for( j = 0; j < x; j++)
          {
               temp = str1[i][j];
               str1[i][j] = str[i][x];
               str1[i][x] = temp;

               x--;
          }
     }

     for( i = 0; ii < k+1; i++)
     {
          printf("%s ",str1[i]);
     }


     return 0;
}
