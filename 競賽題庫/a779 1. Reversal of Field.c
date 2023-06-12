#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	
	int i,j,k;
	int Yes;
	int length;
	char string[1000];
	char new_string[1000];
	
	while(gets(string))
	{
		for(i=0 ; i<1000 ; i++)
		{
			new_string[i] = '\0';
		}
		
		length = strlen(string);
		i = 0;
		j = 0;
		Yes = 1;
		
		for(i=0 ; i<length ; i++)
		{
			if(isalnum(string[i]))
			{
				new_string[j] = string[i];
				j++;
			}
		}
		
		length = strlen(new_string);
		
		for(i=0 ; i<length/2 ; i++)
		{
			if(new_string[i]!=new_string[length-1-i] && new_string[i]!=new_string[length-1-i]+32 && new_string[i]!=new_string[length-1-i]-32)
			{
				Yes = 0;
			}
		}
		
		if(Yes==1)
		{
			printf("%s\n", string);
			printf("-- is a palindrome\n");
		}
		
		else if(Yes==0)
		{
			printf("%s\n", string);
			printf("-- is not a palindrome\n");
		}
	}
	
	return 0;
}
