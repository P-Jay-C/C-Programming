#include<stdio.h>
#define EXAMS 4
#define STUDENTS 3
int minimum ( const int grades[][EXAMS], int pupils, int tests);
int maximum ( const int grades[][EXAMS], int pupils, int tests);
double average ( const int grades[STUDENTS][EXAMS],int pupils, int tests);
void printArray( const int grades[][EXAMS],int pupils, int tests );

int main( void )
{

     const int studentGrades[STUDENTS][EXAMS] =
        { { 77, 68, 86, 73},
          { 96, 87, 89, 78},
          { 70, 90, 86, 81} };

    printf("The array is:\n");
    printArray(studentGrades,STUDENTS,EXAMS);

    int lowest = minimum( studentGrades, STUDENTS, EXAMS);
    int highest = maximum ( studentGrades, STUDENTS,  EXAMS);
    int avg = average( studentGrades, STUDENTS, EXAMS);
    printf("\n\nLowest grade: %d\n"
           "Highest grade is: %d\n"
           "The average of all scores is %d\n\n",
           lowest,highest,avg);

    int i;
    int j;
    double total = 0;

    for ( i = 0; i < STUDENTS; i++){
        for ( j = 0; j < EXAMS; j++){
            total += studentGrades[i][j];
        }
        printf("The average grade for student %d = %.2f \n",i,total/EXAMS);
        total = 0;
    }

}

void printArray(const int grades[][EXAMS],int pupils, int test)
{
    int i;
    int j;

    printf("                    [0] [1] [2] [3]");

    for ( i = 0; i < pupils; i++){
        printf("\nStudents grades[%d]",i);

    for ( j = 0; j < test; j++){
        printf("%4d", grades[i][j]);
        }
    }
}


int minimum ( const int grades[][EXAMS], int pupils, int tests)
{
    int i;
    int j;
    int lowest = grades[0][0];

    for ( i = 1; i < pupils; i++){
        for ( j = 0; j < tests;j++){
            if ( grades[i][j] < lowest){
                lowest = grades[i][j];
            }
        }
    }

    return lowest;
}


int maximum( const int grades[][EXAMS], int pupils, int tests)
{
    int i;
    int j;
    int highGrade = grades[0][0];

    for ( i = 1; i < pupils; i++){
        for ( j = 0; j < tests; j++){
            if ( grades[i][j] > highGrade){
                highGrade = grades[i][j];
            }
        }
    }

    return highGrade;
}

double average ( const int grades[STUDENTS][EXAMS],int pupils, int tests)
{
    int total = 0;;
    int i;
    int j;

    for ( i = 0; i < pupils; i++){
        for ( j = 0; j < tests; j++){
        total += grades[i][j];
        }
    }

    return (double) total/ tests;
}
