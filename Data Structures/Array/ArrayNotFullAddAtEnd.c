#include <stdio.h>>
#include<stdlib.h>

int array_not_full(int a[],int freePos, int data);

int main()
{

     int a[10];
     int i,n,freePos;

     printf("Enter the number of elements: ");
     scanf("%d",&n);

     printf("Enter %d elements: ",n);
     for ( i = 0; i < n; i++)
          scanf("%d ",&a[i]);

     freePos = n;
     freePos = array_not_full(a, freePos, 64);

     for (i = 0; i < freePos; i++)
          printf("%d ",a[i]);

     return 0;
}


int array_not_full(int a[],int freePos, int data)
{
     a[freePos] = data;
     freePos++;
     return freePos;
}
