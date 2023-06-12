#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	
	int i;
	int Yes;
	int count1,count2;
	int length;
	char string[100];
	
	while(gets(string) && string[0]!='E')
	{
		Yes = 0;
		count1 = 0;
		count2 = 0;
		
		length = strlen(string);
		printf("%c", string[0]-32);
		
		for(i=0 ; i<length ; i++)
		{
			if(string[i]==32)
			{
				count1++;
			}
		}
		
		for(i=0 ; i<length ; i++)
		{
			if(string[i]==32)
			{
				printf("%c", string[i+1]-32);
				count2++;
			}
			
			else if(count2==count1 && Yes==0)
			{
				printf(" ");
				Yes = 1;
			}
			
			if(Yes==1)
			{
				printf("%c", string[i]);
			}
		}
		
		printf("\n");
	}
	
	return 0;
}
