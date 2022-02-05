
#include<stdio.h>

int main(void)
{

    FILE *pf;

    char input[25];
    int age;

    printf("Enter your name and age: ");
    scanf("%s%d",input,&age);

    pf = fopen("jerry.txt","w");

    if ( pf == NULL)
        printf("Unable to open the file");
    else{
        fprintf(pf,"%s\t%d",input,age);
        printf("file printed successfully");

        fclose(pf);
    }




    return 0;
}
