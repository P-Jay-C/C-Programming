#include<stdio.h>
int main(void)
{

    int remainder,result = 0,num,temp;

    printf("Enter a number:");
    scanf("%d",&num);

    temp = num;
    while ( temp != 0){
        remainder = temp % 10;
        result = result * 10 + remainder;

        temp /= 10;
    }

    printf("Reverse of %d = %d\n",num,result);

    if(result == num){
        printf("Number is a palindrome.");
    }
    else
        printf("Number is not a palindrome.");
    return 0;

}
