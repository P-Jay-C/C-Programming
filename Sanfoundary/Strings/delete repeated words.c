#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
     char str[100], word[100], twoD[10][10];
     int i = 0, j = 0, k = 0, len1 = 0, len2 = 0, l = 0;

     printf("Enter the string: ");
     gets(str);

     for ( i = 0; str[i] != '\0'; i++)
     {
          if(str[i] == ' '){
               twoD[k][j] = '\0';
               k++;
               j = 0;
          }
          else{
               twoD[k][j] = str[i];
               j++;
          }
     }

     twoD[k][j] = '\0';

     j = 0;
     for ( i = 0; i < k; i++)
     {
          int present = 0;
          for( l = 1; l < k + 1; l++)
          {
               if( twoD[l][j] == '\0' || l == i)
               {
                    continue;
               }

               if(strcmp(twoD[i],twoD[l]) == 0 ){
                    twoD[l][j] = '\0';
                    present = present + 1;
               }
          }

//          if ( present > 0)
//               twoD[i][j] = '\0';
     }

     j = 0;

     for ( i = 0; i < k + 1; i++)
     {
          if(twoD[i][j] == '\0'){
               continue;
          }
          else
               printf("%s ",twoD[i]);
     }

     puts("");

     return 0;
}
