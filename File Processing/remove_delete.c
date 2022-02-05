#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int result;

    result = remove("Decimals.txt");
    printf("%d\n",result);

    if (result == 0)
        printf("File deleted");
    else
        printf("Error: Not deleted");

    return 0;
}
