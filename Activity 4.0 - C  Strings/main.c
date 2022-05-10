/******************************************************************************

Create a Program that takes a string from the user input and converts the vowels into Uppercase.

The program must consist of the following outputs.

+ Print the Inputted String where if it encounters a Vowel will convert it into UPPER CASE.
+ Print the length of the string
+ Print the number of consonants and vowels

*******************************************************************************/
#include <stdio.h>
#include <string.h>
int main()
{
   char str[500];
   int  i, vowels, consonants, len;

   printf("Input a sentence: ");
   fgets(str, sizeof str, stdin);

    vowels = 0;
    consonants = 0;
    len = strlen(str);
   
   i=0;
   while(str[i]!='\0')
   {
        if(str[i]=='a' ||str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u')
            str[i]=str[i]-32;
                 i++;
   }
                  printf("String Converted: %s \n",str);
   {
   
    for(i=0;i < len;i++)  

            if(str[i] =='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || 
            str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            vowels++;
        }
        else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            consonants++;
     
    }
    printf("String Length : %d\n", len);
    printf("Vowels: %d\n",vowels);
    printf("Consonants: %d\n",consonants);

    return 0;
   }
}