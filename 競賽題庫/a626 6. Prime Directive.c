#include <stdio.h>

int main()
{
	
	int a;
	int i,j;
	int Yes;
	int count;
	
	while(scanf("%d", &a)!=EOF)
	{
		i = 2;
		count = 0;
		
		while(i<=a)
		{
			j = 2;
			Yes = 1;
			
			while(j<i)
			{
				if(i%j==0)
				{
					Yes = 0;
					break;
				}
				
				j++;
			}

			if(Yes==1)
			{
				if(count%5==0)
				{
					printf("\n");
				}
				
				printf("%10d", i);
				count++;
			}
			
			i++;
		}
		
		printf("\n");
	}
	
	return 0;
}
