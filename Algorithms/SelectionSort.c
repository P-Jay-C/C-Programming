#include<stdio.h>
#include<stdlib.h>

void swap(int *x,int *y);

int main(void)
{
     int i,j;

     int a[] = {7, 4, 10, 8, 3, 1};
     int n = sizeof(a)/sizeof(a[0]);



     for(i = 0; i < n; i++)
          printf("%d ",a[i]);
     puts("");
     for ( i = 0; i < n-1; i++){
          int min = i;

          for ( j = i+1; j < n; j++){
               if(a[j] < a[min])
                    min = j;
          }

          swap(&a[i],&a[min]);
     }

     for(i = 0; i < n; i++)
          printf("%d ",a[i]);

     return 0;
}

void swap(int *x,int *y)
{
     int temp = *x;
     *x = *y;
     *y = temp;
}

