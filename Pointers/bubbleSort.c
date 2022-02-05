#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void BubbleSort(int a[],int size,int (*comp)(int a,int b));

int compare(int a,int b){
     if (a<b)
          return 1;
     else
          return -1;
};

int absolute_compare( int a , int b){
     if (abs(a) > abs(b))
          return 1;
     else
          return -1;
}

int main()
{

     int arr[] = {6,2,-9,4,-8,10};
     int i;

     BubbleSort(arr,6,compare);

     for ( i = 0; i < 6; i++){
          printf("%d ",arr[i]);
     }
     return 0;
}

void BubbleSort(int a[],int size,int (*comp)(int a,int b))
{
     int pass,i,hold;

     for(pass = 0; pass < size; pass++){
          for(i = 0; i < size - 1; i++){
               if(comp(a[i],a[i+1]) > 0){
                    hold = a[i];
                    a[i]= a[i+1];
                    a[i+1] = hold;
               }
          }
     }
}
