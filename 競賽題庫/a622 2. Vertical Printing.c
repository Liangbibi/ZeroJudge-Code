#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	
	int i,j,k;
	int Max;
	char string[17][1000];
	
	i = 0;
	Max = 0;
	
	while(gets(string[i]))
	{
		if(strlen(string[i])>Max)
		{
			Max = strlen(string[i]);
		}
		
		i++;
	}
	
	for(j=0 ; j<Max ; j++)
	{
		for(k=0 ; k<i-1 ; k++)
		{
			if(k!=0)
			{
				printf("  ");
			}
			
			if(strlen(string[k])<=j)
			{
				printf(" ");
			}
			
			else
			{
				printf("%c", string[k][j]);
			}
		}
		
		printf("\n");
	}
	
	return 0;
}
