#include<stdio.h>
#include<string.h>

void main()
{
     char s1[100], ar[10][20], ar1[10][20], new[10];
     int i, j = 0, k = 0, l, count = 0, flag = 0,n,temp,len[20],maxlen = 0;

     printf("Enter the string: ");
     scanf("%[^\n]s",s1);

     for( i = 0; s1[i] != '\0';i++;j++)
     {
          if(s1[i] >= 33 && s1[i] <= 64)
               i++;

          if(s1[i] == ' '){
               ar[k][j] = '\0';
               k++;
               j = 0;
               i++;
          }
          ar[k][j] = s1[i];
     }
     ar[k][j] = '\0';

     l = 0;
     for( i = 0; i <= k; i++){

          for( j = i+1; j <= k; j++){

               if(strcmp(ar[i],ar[j])== 0){

                    for ( n = 0; n )
               }
          }
     };
}
