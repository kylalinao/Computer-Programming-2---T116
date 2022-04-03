// Create a progran that calculates the average of students' grades (five subject)

#include<stdio.h>

int main()
{
    
    int n=5, i;
    float average, total= 0, x;
    
    //Input grade of all five subjects 
    printf("Enter five numbers: \n");
    for(i=0;i<n;++i)
    {
        scanf("%f", &x);
        total = n;
        average += x; // Calculate total and average 
    }
    //Print the average
    printf("Average = %0.f", (average/n));
    return 0;
}
