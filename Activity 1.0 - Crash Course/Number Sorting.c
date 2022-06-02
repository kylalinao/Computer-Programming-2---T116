// Number Sorting
// Create a program that accepts 10 positive integers and sort these in decending order( highest to lowest)
#include <stdio.h>
void main (){

int n[10];

int i, j, a;

for (i = 0; i < 10; ++i){
    int temp;
    printf("[%d] Input number: ", i+1);
    scanf("%d", &temp);
    if(temp>0){
        n[i] = temp;
    }else{
        printf("This Is Invalid Input. Try Again. \n");
        --i;
        continue;
    }
}

for (i = 0; i < 10; ++i)
{
  for (j = i + 1; j < 10; ++j)
   {
    if (n[i] < n[j])
       {
       a = n[i];
       n[i] = n[j];
       n[j] = a;
       }
   }
}

  printf("\nSorted List: ");
 for (i = 0; i < 10; ++i)
    {

      printf("%d,", n[i]);
     }
 }