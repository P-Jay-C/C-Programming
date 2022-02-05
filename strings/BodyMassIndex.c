#include<stdio.h>
#include<string.h>
#define SIZE 3
#define STRING_LENGTH 50
double calculateBMI( double weight, double height)
{
    double BMI;
    BMI = weight/ height * height;

    return BMI;
}

int main( void )
{
    char *students[SIZE][STRING_LENGTH];
    int age[SIZE];

    char *stu18[3][STRING_LENGTH];
    int stu18Age[SIZE];
    int i;

    for ( i = 0; i < SIZE; i++){
        printf("Enter your names student(%d): ",i);
        getchar();
        scanf("%[^\n]s",students[i]);


        printf("Enter your age: ");
        scanf("%d",&age[i]);
        printf("\n");
    }

    printf("Students Under 18 years\n");
    printf("**************************\n\n");

    printf("%s20%s\n","Student Name", "Age");
    for ( i = 0; i < SIZE; i++){
        if( age[i] < 18){
            printf("%s                       %d\n",students[i],age[i]);
        }
    }


    for ( i = 0; i < SIZE; i++){
        if(age[i] > 18){
            strcpy(stu18[i],students[i]);
            stu18Age[i] = age[i];
        }
    }


    printf("\n\n\nStudents Above 18 years\n");
    printf("**************************\n\n");
    printf("%s%20s\n","Student Name", "Age");
    for ( i = 0; i < SIZE; i++){
            if(stu18Age[i] > 18){
            printf("%s                       %d\n",stu18[i],stu18Age[i]);
            }
        }

return 0;
}



