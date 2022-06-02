// Decimal to Binary, Octal and Hexadecimal 

/* Create a program that accepts one integer input
(should be greater than 0)and output the binary, 
octal and hexadecimal equivalent of that input */

#include<stdio.h>
void convert(int, int);

int main()
{
        int number;
        printf("Enter Decimal Integer : ");
        scanf("%d", &number);
        printf("\nBinary: ");
        convert(number, 2);
        printf("\n");
        printf("\nOctal: ");
        convert(number, 8);
        printf("\n");
        printf("\nHexadecimal: ");
        convert(number, 16);
        printf("\n");

        return 0; // return 0 to operatin g system
}

void convert (int number, int base)
{
        int rem = number%base;
        // base condition
        if(number==0)
                return;
        convert(number/base, base);

        if(rem < 10)
                printf("%d", rem);
        else
                printf("%c", rem-10+'A' );
}