//  Pattern Printing

/* Using nested loops (a loop within a loop), create a program that will accept 
an integer greater than 0 (N), and printf out N lines of asterisks ('*') into a 
pattern specific to that input,as seen on the samples. */

#include<stdio.h>
int main()
{
    int n, rows, cols;

    printf("Enter integer: ");
    scanf("%d",&n);

    // no. of rows
    for(rows=1;rows<=n;rows++)
    {
      //no. of colsl(space)
      for(cols=1;cols<=n-rows;cols++) 
      printf(" ");
      //no. of cols(*)
      for(cols=1;cols<=rows;cols++) 
      printf("* ");

      printf("\n");
    }

    return 0;
}