#include<stdio.h>
#include<stdio.h>

int main(void)
{
    int n;
    FILE *fp;
    fp = fopen("Number.txt","a");

    if (fp == NULL){
        printf("Error: Cannot read file\n");
        exit(1);
    }

    printf("Enter a number: ");
    scanf("%d",&n);

    fprintf(fp,"The number read is %d\n",n);
    fclose(fp);
}
