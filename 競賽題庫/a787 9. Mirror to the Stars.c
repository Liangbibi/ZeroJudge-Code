#include <stdio.h>
#include <string.h>

int main()
{
	
	int a,b;
	int i,j;
	char name[100];
	char operation[2];
	
	while(scanf("%s %d %d %s", name, &a, &b, operation)!=EOF)
	{
		int Matrix[b][a];
		char graph[b][a];
		
		getchar();
		
		for(i=0 ; i<b ; i++)
		{
			for(j=0 ; j<a ; j++)
			{
				Matrix[i][j] = 0;
			}
		}
		
		for(i=0 ; i<b ; i++)
		{
			for(j=0 ; j<a ; j++)
			{
				scanf("%c", &graph[i][j]);
				
				if(graph[i][j]=='.')
				{
					Matrix[i][j] = 0;
				}
				
				else if(graph[i][j]=='*')
				{
					Matrix[i][j] = 1;
				}
			}
			
			getchar();
		}
		
		printf("%s\n", name);
		
		if(strcmp(operation, "I")==0)
		{
			for(i=b-1 ; i>=0 ; i--)
			{
				for(j=0 ; j<a ; j++)
				{
					if(Matrix[i][j]==0)
					{
						printf(".");
					}
					
					else if(Matrix[i][j]==1)
					{
						printf("*");
					}
				}
				
				printf("\n");
			}
		}
		
		else if(strcmp(operation, "R")==0)
		{
			for(i=0 ; i<b ; i++)
			{
				for(j=a-1 ; j>=0 ; j--)
				{
					if(Matrix[i][j]==0)
					{
						printf(".");
					}

					else if(Matrix[i][j]==1)
					{
						printf("*");
					}
				}

				printf("\n");
			}
		}
		
		else if(strcmp(operation, "IR")==0 || strcmp(operation, "RI")==0)
		{
			for(i=b-1 ; i>=0 ; i--)
			{
				for(j=a-1 ; j>=0 ; j--)
				{
					if(Matrix[i][j]==0)
					{
						printf(".");
					}

					else if(Matrix[i][j]==1)
					{
						printf("*");
					}
				}

				printf("\n");
			}
		}
	}
	
	return 0;
}
