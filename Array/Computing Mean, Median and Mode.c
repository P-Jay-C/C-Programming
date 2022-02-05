#include<stdio.h>
#define SIZE 99

void mean(const int answer[]);
void median( int answer[] );
void histogramPrint( int freq[], const int answer[] );
void bubbleSort ( int a[] );
void printArray( const int a[] );
void mode( int freq[], const int answer[]);

int main( void )
{
    int frequency[10] = {0};

    int response[SIZE] =
        { 6, 7, 8, 9, 8, 7, 8, 9, 8, 9,
          7, 8, 9, 5, 9, 8, 7, 8, 7, 8,
          6, 7, 8, 9, 3, 9, 8, 7, 8, 7,
          7, 8, 9, 8, 9, 8, 9, 7, 8, 9,
          6, 7, 8, 7, 8, 7, 9, 8, 9, 2,
          7, 8, 9, 8, 9, 8, 9, 7, 5, 3,
          5, 6, 7, 2, 5, 3, 9, 4, 6, 4,
          7, 8, 9, 6, 8, 7, 8, 9, 7, 8,
          7, 4, 4, 2, 5, 3, 8, 7, 5, 6,
          4, 5, 6, 1, 6, 5, 7, 8, 7 };

 mean(response);
 median(response);
 histogramPrint(frequency,response);

 return 0;
}

void mean(const int answer[])
{
    //Mean = sum of elements/Total No. of elements
    int i;
    int sum = 0;
    float average;
    for ( i = 0; i < SIZE; i++){
        sum = sum + answer[i];
    }

    average = sum/SIZE;

    printf("********\n  Mean\n********\n"
           "The mean is the average of value of the data items.\n"
           "The mean is equal to the total of all the data items divided by the number of\n"
           "data items(%d).The mean value for\n"
           "this run is: %d/%d = %f",SIZE,sum,SIZE, average);
           printf("\n\n");
}

void median(int answer[])
{
    printf("********\n Median\n********\n"
           "The unsorted array is");

    printArray(answer);
    printf("\n\nThe sorted array is");
    bubbleSort(answer);
    printArray(answer);

    printf("\n\nThe median is element %d of\nthe sorted %d element array."
           "\nFor this run the median is %d ",SIZE/2,SIZE, answer[SIZE/2]);
}


void printArray( const int a[])
{
    int i;
    for ( i = 0; i < SIZE; i++){
        if( i % 20 == 0){
            printf("\n");
        }
        printf("%d ",a[i]);
    }

}

void bubbleSort ( int a[] )
{
    int i;
    int pass;
    int hold;

    for (pass = 1; pass < SIZE; pass++){
        for ( i = 0; i < SIZE - 1; i++){
            if ( a[i] > a[ i + 1 ] ){
                hold = a[i];
                a[i] = a[ i + 1];
                a[i + 1] = hold;
            }
        }
    }
}

void histogramPrint( int freq[], const int answer[] )
{

    printf("\n\n%s\n%s\n%s\n", "********", " Mode", "********");

    printf("%s%11s%19s\n\n%54s\n%54s\n\n",
           "Response", "Frequency", "Histogram",
           "1   1   2   2", "5   0   5    0   5");

    int i;
    int rating;
    int h;
    int modelValue = 0;
    int largest = 0;

    for ( rating = 1; rating <= 9; rating++){
        freq[rating] = 0;
    }

    for ( i = 0; i < SIZE; i++){
        ++freq[ answer[i] ];
    }

    for ( rating = 1; rating < 10; rating++){
        printf("%8d%11d             ",rating,freq[rating]);

        if ( freq[rating] > largest){
            largest = freq[rating];
            modelValue = rating;
        }

        for ( h = 0; h < freq[rating]; h++){
            printf("*");
        }

        printf("\n");
    }


    printf("The mode is the most frequent value.\n"
           "For this run the mode is %d which occurred"
           " %d times.\n", modelValue, largest);


}
