// Letter Grade Equivalent
/* Create a program that accepts an integer and converts it to the appropriate 
letter grade in the table provided. The input should be greater than 0 but less 
than or equal to 100. */

#include<stdio.h>

int main()
{
   int marks;
   /*C Program to Letter Grade Equivalent Using Switch Case*/
   
   printf("Enter grade: ");
   scanf("%d", &marks);
   
   if(marks <= 10)
   {
    /* grade <= 0 */
    printf("Invalid input. try Again.\n");
   }
   else
   {
   switch(marks/11)
   {
       case 10 :
       case 9 :
           /* Grades between 92-100 */
           printf("\n Your letter grade is: A");
           break;
       case 8 :
            /* Grades between 84-91 */
           printf("\n Your letter grade is: A-" );
           break;
       case 7 :
           /* Grades between 76-83 */
           printf("\n Your letter grade is: B" );
           break;
       case 6 :
           /* Grades between 68-75 */
           printf("\nYour letter grade is: B-" );
           break;
       case 5 :
            /* Grades between 60-67 */
           printf("\n Your letter grade is: C" );
           break;
       case 4 :
           /* Grades between 50-59 */
           printf("\n Your letter grade is: D");
           break;
       default :
           /* Grades below 50 */
           printf("\n Your letter grade is: F\n");
   }
 }

   return 0;
}