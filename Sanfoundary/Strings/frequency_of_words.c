#include<stdio.h>
int main(void)
{
     char string[80];
     int i,num = 0, sum = 0;

     printf("Enter the string containing both digits and alphabets: ");
     scanf("%s",string);

     for ( i = 0; string[i] != '\0'; i++)
     {
          if((string[i] >= '0') && (string[i] <= '9')){
               num += 1;
               sum += (string[i] - '0');
          }
     }

     printf("NO. of Digits in the string = %d\n",num);
     printf("Sum of all digits = %d\n", sum);


     return 0;
}
