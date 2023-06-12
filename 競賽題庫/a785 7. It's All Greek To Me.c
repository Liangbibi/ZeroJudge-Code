#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	
	int i;
	int length;
	char string[1000];
	
	while(gets(string))
	{
		length = strlen(string);
		
		if(string[0]=='E' && string[1]=='N' && string[2]=='D' && length==3)
		{
			break;
		}
		
		for(i=0 ; i<length ; i++)
		{
			if(string[i+1]!='-' || i==length-1)
			{
				printf("%c", string[i]);
			}
			
			else if(string[i+1]=='-')
			{
				if(string[i]=='a')
				{
					if(string[i+2]=='a' || string[i+2]=='e' || string[i+2]=='y')
					{
						printf("a");
						i += 2;
					}
					
					else if(string[i+2]=='o' && string[i+3]=='u')
					{
						printf("w");
						i += 3;
					}
					
					else if(string[i+2]=='o' || string[i+2]=='w')
					{
						printf("w");
						i += 2;
					}
					
					else if(string[i+2]=='i')
					{
						printf("ai");
						i += 2;
					}
				}
				
				else if(string[i]=='e')
				{
					if(string[i+2]=='a' || string[i+2]=='y')
					{
						printf("y");
						i += 2;
					}

					else if(string[i+2]=='e' || string[i+2]=='i')
					{
						printf("ei");
						i += 2;
					}
					
					else if(string[i+2]=='o' && string[i+3]=='u')
					{
						printf("ou");
						i += 3;
					}

					else if(string[i+2]=='o')
					{
						printf("ou");
						i += 2;
					}
					
					else if(string[i+2]=='w')
					{
						printf("w");
						i += 2;
					}
				}
				
				else if(string[i]=='o')
				{
					if(string[i+2]=='a' || string[i+2]=='y' || string[i+2]=='w')
					{
						printf("w");
						i += 2;
					}
					
					else if(string[i+2]=='o' && string[i+3]=='u')
					{
						printf("ou");
						i += 3;
					}

					else if(string[i+2]=='e' || string[i+2]=='o')
					{
						printf("ou");
						i += 2;
					}

					else if(string[i+2]=='i')
					{
						printf("oi");
						i += 2;
					}
				}
			}
		}
		
		printf("\n");
	}
	
	return 0;
}
