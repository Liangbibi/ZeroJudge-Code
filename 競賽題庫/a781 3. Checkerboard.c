#include <stdio.h>

int main()
{
	
	int a;
	int i,j,k,l;
	
	while(scanf("%d", &a)!=EOF && a!=0)
	{
		for(i=1 ; i<=8 ; i++)
		{
			for(j=1 ; j<=a ; j++)
			{
				for(k=1 ; k<=4 ; k++)
				{
					if(i%2==1)
					{
						for(l=1 ; l<=a ; l++)
						{
							printf("#");
						}

						for(l=1 ; l<=a ; l++)
						{
							printf(".");
						}
					}
					
					else if(i%2==0)
					{
						for(l=1 ; l<=a ; l++)
						{
							printf(".");
						}

						for(l=1 ; l<=a ; l++)
						{
							printf("#");
						}
					}
				}
				
				printf("\n");
			}
		}
		
		printf("\n");
	}
	
	return 0;
}
