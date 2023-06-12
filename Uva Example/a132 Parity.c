#include <stdio.h>

int main()
{
	
	int a;
	int i,j,k;
	int Number[1000];
	
	while(scanf("%d", &a)!=EOF && a!=0)
	{
		j = 0;
		k = 0;
		
		while(a!=0)
		{
			Number[j] = a%2;
			a /= 2;
			
			if(Number[j]==1)
			{
				k++;
			}
			
			j++;
		}
		
		printf("The parity of ");
		
		for(i=j-1 ; i>=0 ; i--)
		{
			printf("%d", Number[i]);
		}
		
		printf(" is %d (mod 2).\n", k);
	}
	
	return 0;
}
