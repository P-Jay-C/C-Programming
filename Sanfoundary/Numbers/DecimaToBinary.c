#include<stdio.h>
#include<math.h>

int main(void)
{
    int decimal,i = 1,binary = 0;
    int remainder,count = 0;

    printf("Enter any decimal: ");
    scanf("%d",&decimal);

    while ( decimal > 0){

        remainder = decimal % 2;

        if ( remainder == 1)
            count++;

        binary = binary + remainder * i;
        decimal = decimal/2;

        i = i * 10;
    }

    printf("Equivalent binary = %d\n",binary);
    printf("There are %d ones in the binary digits.\n",count);
    return 0;
}
