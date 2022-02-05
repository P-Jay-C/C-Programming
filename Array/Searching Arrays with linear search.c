#include<stdio.h>
#define SIZE 100

int main( void )
{
    int num;
    int i;
    int found = 0;
    int subscript;

    int arr[SIZE];
    for ( i = 0; i < SIZE; i++){
        arr[i] = 2 * i;

    }

    printf("Enter a number you searching for: ");
    scanf("%d", &num);

    for ( i = 0; i < SIZE; i++){
        if ( arr[i] == num){
            found = 1;
            subscript = i;
        }
    }
    if ( found == 1){
        printf("The number has been found in subscript[%d].\n",subscript);
    }
    else{
        printf("The number cannot be found.\n");
    }

    return 0;
}




