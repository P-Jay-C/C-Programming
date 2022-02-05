#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
     char str1[100], str2[100], str_rem[100];
     int i = 0, j = 0, k = 0;

     printf("Enter the First string: ");
     gets(str1);

     fflush(stdin);

     printf("Enter the Second string: ");
     gets(str2);

     for( i = 0; str1[i] != '\0'; i++)
     {
          for( j = 0; str2[j] != '\0';j++)
          {
              if(str1[i] == str2[j]){
                    continue;
              }
              else{
                    str_rem[k]=str2[j];
                    k++;
              }
          }

          str_rem[k] = '\0';
          strcpy(str2,str_rem);
          k = 0;

     }

     printf("\nOn removing characters from the first string: %s\n",str2);

     return 0;
}
