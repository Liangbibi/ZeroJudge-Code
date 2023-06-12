#include <stdio.h>

int main()
{
	
	int n;
	int a,b,c;
	int i,j;
	int max;
	int Number[51];
	
	max = 0;
	
	for(i=0 ; i<51 ; i++)
	{
		Number[i] = 0;
	}
	
	scanf("%d", &n);

	for(i=1 ; i<=n ; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		
		for(j=0 ; j<=b+1 ; j++)
		{
			if(Number[a+j]<c+1)
			{
				Number[a+j] = c+1;
			}
		}
	}
	
	for(i=0 ; i<51 ; i++)
	{
		if(Number[i]>max)
		{
			max = Number[i];
		}
	}
	
	for(i=max ; i>=0 ; i--)
	{
		for(j=1 ; j<51 ; j++)
		{
			if((Number[j]==i && (Number[j-1]<i || Number[j+1]<i) && Number[j]!=0) || (i==0 && Number[j]!=0 && (Number[j-1]==0 || Number[j+1]==0)) || (Number[j]>i && (Number[j-1]==i || Number[j+1]==i)))
			{
				printf("+");
			}
			
			else if(Number[j]==i)
			{
				printf("-");
			}
			
			else if(Number[j]>i && (Number[j-1]<i || Number[j+1]<i))
			{
				printf("|");
			}
			
			else
			{
				printf(" ");
			}
		}
		
		printf("\n");
	}
	
	for(i=1 ; i<=50 ; i++)
	{
		printf("%d", i%10);
	}
	
	return 0;
}
