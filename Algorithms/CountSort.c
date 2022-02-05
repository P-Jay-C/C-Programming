// Counting Sort in C programming
#include<stdio.h>
#include<stdlib.h>

void countingSort(int array[], int n){

     int output[10];  // Array to store correct positions of elements
     int count[10]; // Array for counting elements

     printArray(array,n);
     // Finding the max element
     int max = array[0];
     for(int i = 1; i < n ; i++){
          if (array[i] > max)
               max = array[i];
     }

     printf("The max is %d\n", max);


     // initializing to 0
     for(int i = 0; i <= max; i++){
          count[i] = 0;
     }
     printf("\nInitialization of count array to zero:");
     printArray(count, max+1);


     //counting elements
     for(int i = 0; i < n; i++){
          ++count[array[i]];
     }
     printf("\nCounting of elements in array in to count array:");
     printArray(count,max+1);

     //calculating positions + 1
     for(int i = 1; i <= max; i++){
          count[i] = count[i] + count[i-1];
     }

     for ( int i = n-1; i >= 0; i-- ){
          output[count[array[i]] - 1] = array[i];
          --count[array[i]];
     }

     for ( int i = 0; i < n; i++){
          array[i] = output[i];
     }

}

void printArray(int array[], int n){

     printf("\n");
     int i;
     for (i = 0; i < n; i++){
          printf("%d ",array[i]);
     }

     printf("\n");
}


int main(void)
{

     int array[] = {4, 2, 2, 8, 3, 3, 1};
     int n = sizeof(array)/sizeof(array[0]);

     countingSort(array,n);
     printArray(array,n);

     printf("\n\n");
     return 0;
}
