#include<stdio.h>

int main(void)
{
    int num1,num2,num3;

    printf("Enter the values of num1,num2,num3: ");
    scanf("%d %d %d",&num1,&num2,&num3);

    printf("num1 = %d\tnum2 = %d\tnum3 = %d",num1,num2,num3);

    if ( num1 > num2 && num1 > num2){
        printf("\nNum1 is the greatest among three");
    }
    else if( num2 > num1 && num2 > num3){
        printf("\nNum2 is the greatest among three.");
    }
    else{
        printf("\nNum3 is the greatest among three.");
    }


    return 0;
}
