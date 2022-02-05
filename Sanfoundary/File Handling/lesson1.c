#include<stdio.h>
#include<stdlib.h>

void main()
{
     FILE *fptr;
     char name[20];
     int age;
     float salary;

     fptr = fopen("emp.txt","w");

     if( fptr == NULL){
          printf("File does not exist\n");
          exit(1);
     }
     else{
          printf("Enter the name: ");
          scanf("%s",name);

          fprintf(fptr, "Name = %s\n",name);

          printf("Enter the age: ");
          scanf("%d",&age);

          fprintf(fptr, "Age = %d\n",age);

          printf("Enter the salary: ");
          scanf("%f",&salary);

          fprintf(fptr,"Salary     = %.2f\n",salary);

          printf("\nFile has been created successfully");

          fclose(fptr);
     }

}
