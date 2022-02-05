#include<stdio.h>
#include<string.h>

int main(void)
{

   char a[100], b[100];

   printf("Enter a string to check if it's a palindrome: ");
   gets(a);

   strcpy(b,a);
   strrev(b);

   if ( strcmp(b,a) == 0)
               printf("The string is a palindrome\n");
   else
               printf("The string is not a palindrome");

   return 0;

}
