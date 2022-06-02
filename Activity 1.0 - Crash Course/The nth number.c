// The nth power

/* Create a program that accepts two(2) integers to represent the variables X: 
The base (represented as X), and the exponent ( represented as Y). X may be 
greater or lesser than 0, but should not be equal to 0. For Y, several constraints
are placed. 

If Y > 0, multiply X by itself in terms of Y.

If Y < 0, do the same as above but the resulting number should become a 
denominator, with 1 as the numerator. The result should thus be a representation
of a fraction; not a floating integer.

If Y==0, the result should always be 1 regardless of X */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x, y, result;
    printf("Enter X: ");
    scanf("%d", &x);
    printf("Enter Y: ");
    scanf("%d", &y);
    if (x != 0)
    {
        if (y > 0)
        {
            result = x;
            for (int i = 1; i < y; i++)
            {
                result *= x;
            }
        }
        else if (y < 0)
        {
            result = x;
            for (int i = 1; i < abs(y); i++)
            {
                result *= x;
            }
            printf("%d^%d = 1/%d.", x, y, result);
            return 0;
        }
        else{
            result = 1;
        }
    }
    else
    {
        printf("ERROR!!! X should not be equal to 0.");
        return -1;
    }
    printf("%d^%d= %d.", x, y, result);
    return 0;
}