#include<stdio.h>
int main(void)
{
    FILE *pf;
    char data[50];
    pf = fopen("anil.txt","r");

    if ( pf == NULL)
        printf("Unable to create file");
    else{
        while (!feof(pf)){
            fgets(data,50,pf);
            printf("The characters read were: %s",data);
        }

        fclose(pf);
    }

    return 0;
}
