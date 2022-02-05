#include<stdio.h>
#include<stdlib.h>

int main()
{

     int a[5] = {16,14,5,6,8};
     int pass,i,hold,flag;

     for ( pass = 0; pass < 5-1; pass++){

          flag  = 0;

          for ( i = 0; i < 5 -1-pass; i++){

               if(a[i] > a[i+1]){
                    hold = a[i];
                    a[i] = a[i+1];
                    a[i+1] = hold;

                    flag = 1;
               }
          }

          if(flag == 0)
               break;
     }

     for ( i = 0; i < 5; i++)
          printf("%d ",a[i]);


     return 0;
}
