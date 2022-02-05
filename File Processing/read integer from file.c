#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int n;
    FILE *fp;

    fp = fopen("Number.txt","a");
    if(fp == NULL){
        printf("File Cannot be open");
        exit(1);
    }

    fscanf(fp,"%d",&n);
    fprintf(fp,"\nNumber is = %d",n);

    fclose(fp);
    return 0;

}
