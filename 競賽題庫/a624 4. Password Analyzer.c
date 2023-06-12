#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
	
	int i,j;
	int count;
	int length;
	char string[50];
	bool upperletter,lowerletter,alpha,other;
	
	while(scanf("%s", string)!=EOF)
	{
		count = 0;
		length = strlen(string);
		alpha = false;
		other = false;
		upperletter = false;
		lowerletter = false;
		
		if(length>=8)
		{
			count++;
		}
		
		i = 0;
		
		while(upperletter==false && i<length)
		{
			for(j=0 ; j<26 ; j++)
			{
				if(string[i]==65+j)
				{
					alpha = true;
					upperletter = true;
				}
			}
			
			i++;
		}
		
		i = 0;
		
		while(lowerletter==false && i<length)
		{
			for(j=0 ; j<26 ; j++)
			{
				if(string[i]==97+j)
				{
					alpha = true;
					lowerletter = true;
				}
			}
			
			i++;
		}
		
		i = 0;
		
		while(other==false && i<length)
		{
			for(j=0 ; j<32 ; j++)
			{
				if(string[i]==33+j)
				{
					other = true;
				}
			}
			
			for(j=0 ; j<6 ; j++)
			{
				if(string[i]==91+j)
				{
					other = true;
				}
			}
			
			for(j=0 ; j<4 ; j++)
			{
				if(string[i]==123+j)
				{
					other = true;
				}
			}
			
			i++;
		}
		
		if(upperletter==true && lowerletter==true)
		{
			count++;
		}
		
		if(alpha==true && other==true)
		{
			count++;
		}
		
		switch(count)
		{
			case 0:
				printf("This password is WEAK\n");
				break;
			case 1:
				printf("This password is ACCEPTABLE\n");
				break;
			case 2:
				printf("This password is GOOD\n");
				break;
			case 3:
				printf("This password is STRONG\n");
				break;
		}
	}
	
	return 0;
}
