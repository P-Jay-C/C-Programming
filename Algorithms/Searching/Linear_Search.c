#include<stdio.h>
#include<stdlib.h>

void linearSearch( int arr[], int n,int data){

     int i,found = 0;

     for ( i = 0; i < n; i++){
          if (data == arr[i]){
               printf("Element found at index %d\n",arr[i]);
               found = 1;
               break;
          }
     }

     if (found == 0)
          printf("The element was not found.\n");
}

int main(void)
{

     int arr[7] = {2, 5, 6 , 8, 2, 9};
     int n = sizeof(arr)/sizeof(arr[0]);

     int data = 10;

     linearSearch(arr,n,data);
     return 0;
}


void shellSort(int a[],int n){
     int temp,interval,j,i;
     for(interval = n/2; interval > 0; interval /= 2){
          for(i = interval; i < n; i+=1){
               temp = a[i];
               for(j = i; j >= interval && a[j-interval] > temp; j -= interval){
                    a[j] = a[j-interval];
               }
               a[j] = temp;
          }
     }
}
