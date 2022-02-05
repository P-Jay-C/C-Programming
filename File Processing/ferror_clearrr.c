#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int result;
    char data[20] = "hello teacher";
    FILE *fp;

    fp = fopen("example.txt","r");

    if ( fp == NULL)
        printf("Error: File not created\n");

    fprintf(fp,"%s",data);

    result = ferror(fp);
    printf("%d\n",result);

    clearerr(fp);

    result = ferror(fp);
    printf("%d\n",result);

    if ( result == 0)
        printf("No read write error.\n");
    else
        printf("Read or write error has occurred.\n");


    return 0;
}
