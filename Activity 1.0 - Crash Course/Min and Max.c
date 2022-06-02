//Min and Max

/* Create a program that accepts 10 positive integers and print
out the smallest and largest number(s) in the list. */

#include <stdio.h>
void main()
{
    int arr1[10];
    int i, max, min, n;
	
       for(i=0;i<10;i++)
            {
          int temp;
	      printf("[%d]Input number: ",i+1);
	      scanf("%d",&temp);
	    if(temp>0){
        arr1[i] = temp;
    }else{
        printf("This is an invalid input. Try Again. \n");
        --i;
        continue;
}
	    }
    max = arr1[0];
    min = arr1[0];

    for(i=1; i<10; i++)
    {
        if(arr1[i]>max)
        {
            max = arr1[i];
        }
        if(arr1[i]<min)
        {
            min = arr1[i];
        }

    }
    printf("\nMin: %d\n", min);
    printf("Max: %d\n\n", max);
    for (i = 0; i < 10; ++i)
        {
    }   
}