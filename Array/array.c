//Program for matrix multiplication
#include<stdio.h>
#define MAX 50
int main()
{
    int a[MAX][MAX], b[MAX][MAX], product[MAX][MAX];
    int arows, acolumns, brows, bcolumns;
    int i,j,k;
    int sum = 0;

    printf("Enter the number of rows and columns of matrix a: ");
    scanf(" %d %d",&arows, &acolumns);

    printf("Enter the elements for matrix a: ");
    for ( i = 0; i < arows; i++)
    {
        for( j = 0; j < acolumns; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter the number of rows and columns of matrix b: ");
    scanf(" %d %d",&brows, &bcolumns);

    if ( acolumns != brows){
        printf("Sorry, can't multiply matrix a * b");
    }

    else
    {
        printf("Enter the elements for matrix b: ");
        for ( i = 0; i < brows; i++)
        {
            for( j = 0; j < bcolumns; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }


        printf("\nResultant matrix: \n");
        for ( i = 0; i < arows; i++)
        {
            for( j = 0; j < bcolumns; j++)
            {
                for( k = 0; k < arows ; k++)
                {
                    sum += a[i][k] * b[k][j];
                }
                    product[i][j] = sum;
                    sum = 0;
            }
        }

        for ( i = 0; i < arows; i++)
        {
            for( j = 0; j < bcolumns; j++)
            {
                printf("%d ", product[i][j]);
            }

            puts("");
        }
    }


    return 0;
}

