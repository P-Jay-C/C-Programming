#include<stdio.h>
#include<stdlib.h>

int main(void)
{

     int temp,i,j;

     int a[6] = {5, 4, 10, 1, 6, 2};

     for ( i = 1; i < 6; i++){

          temp = a[i];
          j = i-1;

     while ( j >= 0 && a[j] > temp){
          a[j+1] = a[j];
          j--;
     }

     a[j+1] = temp;

}

     for ( i = 0; i < 6; i++)
          printf("%d ",a[i]);

     return 0;
}






















