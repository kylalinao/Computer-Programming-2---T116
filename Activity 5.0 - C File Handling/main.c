#include <stdio.h>

int main ()
{
  FILE * fptr;
  int i,n;
  char str[100];
  char fname[20];
  
printf("Input the file location: ");
scanf("%s",fname);
    fptr = fopen(fname, "a"); 
     printf("Input how many lines to be appended: ");
    scanf("%d", &n);
    for(i = 0; i < n+1;i++)
    {
    fgets(str, sizeof str, stdin);
    fputs(str, fptr);
  }
  fclose (fptr);
}