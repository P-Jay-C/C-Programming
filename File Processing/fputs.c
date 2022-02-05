#include<stdio.h>

int main(void)
{

    FILE *pf;
    char input[25];

    pf = fopen("jerry.txt","a");

    if ( pf == NULL)
        printf("Unable to open the file");
    else{
        printf("Enter a string to write to the file\n");
        gets(input);

        fputs(input,pf);
        printf("Data has been written successfully\n");

        fclose(pf);
    }




    return 0;
}
