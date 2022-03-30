// Create a Program that adds all the array elements and prints the sum

#include <stdio.h>

int main()
{
    int a[10], i, n, sum=0;

       printf("\nEnter the size of the Array: ");
       scanf("%d",&n);
       
    if (n>=5 && n<=10){
       for(i=0; i<n ; ++i){
	      printf("Enter Element %d : ",i+1);
	      scanf("%d",&a[i]);
	
        sum += a[i];
    }
    
    printf("Sum of all array element : %d", sum);
    
    return 0;
    }
    
    else {
        printf("\nArray size limit is 5 to 10 only");
        
	   return main(0);
    }
    
}
