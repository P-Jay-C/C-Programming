#include<stdio.h>
#include<stdlib.h>

int pointertofunction(int *num1,int *num2);
int main(void)
{
     int num1, num2;
     printf("Enter to numbers to sum: ");
     scanf("%d%d",&num1,&num2);


     int sum = pointertofunction(&num1,&num2);
     printf("%d + %d = %d",num1,num2,sum);
     return 0;
}

int pointertofunction(int *num1,int *num2){
     int add;
     add = *num1 + *num2;
}
