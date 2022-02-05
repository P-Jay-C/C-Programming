#include<stdio.h>
#include<stdlib.h>

int main(void)
{
     FILE *fileptr1, *fileptr2;
     char filename[30], ch;
     int line, temp = 1;

     printf("Enter file name: ");
     scanf("%s",filename);


     fileptr1 = fopen(filename,"r");

     while( (ch = fgetc(fileptr1)) != EOF )
          printf("%c",ch);

     rewind(fileptr1);

     printf("\nEnter line number of the line of the deleted: ");
     scanf("%d",&line);

     fileptr2 = fopen("replica.c","w");

     while( (ch = fgetc(fileptr2)) != EOF )
          if(ch == '\n')
               temp++;

          if( temp != line)
               putc(ch, fileptr2);


     return 0;
}
