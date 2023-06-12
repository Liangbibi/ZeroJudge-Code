#include <stdio.h>

int main()
{
	
	int a,b;
	int i,j;
	int m,n;
	int Matrix[19][19];
	
	m = 18;
	n = 18;
	
	for(i=0 ; i<19 ; i++)
	{
		for(j=0 ; j<19 ; j++)
		{
			Matrix[i][j] = 0;
		}
	}
	
	for(i=360 ; i>=0 ; i--)
	{
		Matrix[m][n] = i;
		
		if(n-1>=0 && Matrix[m][n-1]==0 && (Matrix[m+1][n]!=0 || m+1>18))
		{
			n--;
		}
		
		else if(m-1>=0 && Matrix[m-1][n]==0 && (Matrix[m][n-1]!=0 || n-1<0))
		{
			m--;
		}

		else if(n+1<a && Matrix[m][n+1]==0 && (Matrix[m-1][n]!=0 || m-1<0))
		{
			n++;
		}

		else if(m+1<a && Matrix[m+1][n]==0 && (Matrix[n+1][n]!=0 || n+1>18))
		{
			m++;
		}
	}
	
	while(scanf("%d", &a)!=EOF)
	{
		b = (19-a)/2;
		
		for(i=b ; i<19-b ; i++)
		{
			for(j=b ; j<19-b ; j++)
			{
				printf("%4d", Matrix[i][j]);
			}
			
			printf("\n");
		}
		
		printf("\n");
	}
	
	return 0;
}
