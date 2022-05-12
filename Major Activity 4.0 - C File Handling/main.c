//Write a code where the user can input multiple numbers of students (n) and output them into separate files

#include <stdio.h>
#include <stdlib.h>

int main()
{
   char name[255];
   int math, science, english, i, id, num, Total, Average;

   printf("Number of students: ");
   scanf("%d", &num);

   for(i = 0; i < num; ++i)
   {
      printf("For student%d\nStudent Name: ", i+1);
      scanf("%s", name);
      FILE *fptr;
     fptr = fopen(name,"w");
    if(fptr == NULL)
   {
       printf("Error!");
       exit(1);
   }
      printf("Student ID number: ");
      scanf("%d", &id);
      printf("Math Grade: ");
      scanf("%d", &math);
      printf("Science Grade: ");
      scanf("%d", &science);
      printf("English Grade: ");
      scanf("%d", &english);
      
    int Total = (math + science + english);
    float Average = ((math + science + english)/3);

fprintf(fptr,"\n Student Name: %s \n Student ID Number: %d \n Math Grade: %d \n Science Grade: %d \n English Grade: %d \n Total Grade: %d \n Grade Average: %f", name,id,  math, science, english, Total, Average);
  	}	
   return 0;
}