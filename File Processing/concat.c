#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    FILE *f1,*f2;
    char ch;

    f1 = fopen("content.txt","r");
    f2 = fopen("content1.txt","a");

    if ( f1 == NULL || f2 == NULL){
        printf("Error: File not created");
        exit(EXIT_FAILURE);
    }

    while ( (ch = fgetc(f1)) != EOF ){
        fputc(ch,f2);
    }

    fclose(f1);
    fclose(f2);

    fgets()

    return 0;
}
