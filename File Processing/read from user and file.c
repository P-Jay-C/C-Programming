#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    char name[50];
    char ch;
    int count = 0;
    int word = 0;
    FILE *fp;

    fp = fopen("table.txt","r");
    if(fp == NULL){
        printf("Error: File is not opened");
        exit(1);
    }


    while(1){
        ch = fgetc(fp);
        if(ch == EOF)
            break;
            count++;
        if ( ch == ' ')
            word++;
    }

    printf("There are %d characters in the file.\n",count);
    printf("\nThere %d words  in the file.\n",word);

    fclose(fp);

    return 0;

}
