#include <stdio.h>

int main()
{
	
	int a,b;
	int i,j,k,l;
	int m,n;
	int min;
	int Yes;
	int map[11][11];
	int water_map[11][11];
	
	for(i=0 ; i<11 ; i++)
	{
		for(j=0 ; j<11 ; j++)
		{
			scanf("%d", &map[i][j]);
			water_map[i][j] = 0;
		}
	}
	
	while(scanf("%d %d", &a, &b)!=EOF)
	{
		if(a==-1 && b==-1)
		{
			break;
		}
		
		m = b;
		n = a;
		Yes = 1;
		min = map[b][a];
		water_map[b][a] = 1;
		
		while(Yes==1)
		{
			k = m;
			l = n;
			Yes = 0;
			
			for(i=-1 ; i<=1 ; i++)
			{
				for(j=-1 ; j<=1 ; j++)
				{
					if(map[k+i][l+j]<min)
					{
						min = map[k+i][l+j];
						m = k+i;
						n = l+j;
						Yes = 1;
					}
				}
			}
			
			water_map[m][n] = 1;
		}
	}
	
	for(i=0 ; i<11 ; i++)
	{
		for(j=0 ; j<11 ; j++)
		{
			if(water_map[i][j]==0)
			{
				printf(".");
			}
			
			else if(water_map[i][j]==1)
			{
				printf("*");
			}
		}
		
		printf("\n");
	}
	
	return 0;
}
