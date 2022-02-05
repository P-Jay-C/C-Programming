#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
     char str[100],word[100],twoD[40][30];
     int i = 0, col = 0, row = 0;

     printf("Enter the string: ");
     gets(str);

     printf("Enter the word you wish to remove: ");
     gets(word);

     for ( i = 0; str[i] != '\0'; i++)
     {
          if(str[i] != ' '){
               twoD[row][col] = str[i];
               col++;
          }
          else{
               twoD[row][col] = '\0';
               row++;
               col = 0;
          }
     }
     twoD[row][col] = '\0';
     col = 0;

     for ( i = 0; i < row + 1; i++)
     {
          if(strcmp(twoD[i],word) == 0){
               twoD[i][col] = '\0';
          }
     }

     col = 0;

     for(i = 0; i < row + 1; i++){

          if(twoD[i][col] == '\0')
               continue;
          else
               printf("%s ",twoD[i]);
     }

     return 0;
}
