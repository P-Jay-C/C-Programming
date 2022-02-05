#include<stdio.h>
#include<stdlib.h>

int main(void)
{
     char filename[30],ch;
     FILE *fptr;

     printf("Enter the name of the file to open: ");
     scanf("%s",filename);

     fptr = fopen(filename,"r");

     if( fptr == NULL){
          printf("Could not open file.");
          exit(0);

     }else{
          while( (ch = fgetc(fptr)) != EOF)
               printf("%c",ch);
     }



     return 0;
}
