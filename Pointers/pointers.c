#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int ascending(int a,int b)
{
     if ( a > b)
          return 1;
     else
          return -1;
}

int descending(int a, int b)
{
     if ( b > a)
          return 1;
     else
          return -1;

}

void BubbleSort( int* A,int n, int (*descending)(int,int))
{
     int pass,j,hold;

     for( pass = 0; pass < n; pass++){
          for( j = 0; j < n - 1; j++){
               if (descending(A[j],A[j+1]) > 0){
                    hold = A[j];
                    A[j] = A[j+1];
                    A[j+1] = hold;
               }
          }
     }
}

int main()
{
     int i, A[] = {3,2,1,5,6,4};
     BubbleSort(A,6,descending);

     for ( i = 0; i < 6 ;i++){
          printf("%d ",A[i]);
     }
}
