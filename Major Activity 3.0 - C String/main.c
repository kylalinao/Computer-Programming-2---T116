// Create a program that reverses the word order on the inputted data from the user
#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[100];
  	int i, j, len, startWord, endWord;
 
  	printf("Enter any string: ");
  	gets(str);
  	
  	len = strlen(str);
  	endWord = len - 1;
  	
  	printf("Reverse ordered words:\n"); 	   	
  	for(i = len - 1; i >= 0; i--)
	{
		if(str[i] == ' ' || i == 0)
		{
			if(i == 0)
			{
				startWord = 0;
			}
			else
			{
				startWord = i + 1;
			}
			for(j = startWord; j <= endWord; j++)
			{
				printf("%c", str[j]);
			}
			endWord = i - 1;
			printf(" ");				
		} 
	}
	
  	return 0;
}