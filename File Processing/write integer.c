#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int n;
    FILE *fp;

    fp = fopen("Number.txt","w");
    if(fp == NULL){
        printf("\nError: Cannot Open File");
        exit(1);
    }

    printf("\nEnter a Number: ");
    scanf("%d",&n);

    fprintf(fp,"Number = %d",n);
    printf("\nNumber is stored in file successfully...");


    return 0;
}
