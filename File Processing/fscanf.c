#include<stdio.h>
#include<stdlib.h>

int main( void )
{
    int n;
    float f;
    char ch;
    char str[10];

    FILE *fp;


    fp = fopen("Number.txt","r");

    if (fp == NULL){
        printf("Unable to open the file\n");
        exit(1);
    }

    fscanf(fp,"%c",&ch);
    fscanf(fp,"%d",&n);
    fscanf(fp,"%f",&f);
    fscanf(fp,"%s",str);

    printf("\nch = %c\nn = %d\nf= %f\nstr = %s",ch,n,f,str);

    fclose(fp);
    return 0;
}
