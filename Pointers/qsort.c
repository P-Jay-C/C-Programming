#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int compare(const void *a, const void* b){
     int A = *((int*)a);
     int B = *((int *)b);

     return B - A;
}
int main()
{

     int arr[] = {-31,22,-1,50,-6,4};
     int i;

     qsort(arr,6,sizeof(int),compare);

     for ( i = 0; i < 6; i++){
          printf("%d ",arr[i]);
     }
     return 0;
}

