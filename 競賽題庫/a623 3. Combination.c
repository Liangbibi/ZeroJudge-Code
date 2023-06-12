#include <stdio.h>

int main()
{

	int a,b;
	int i,j;
	long long ans;
	
	while(scanf("%d %d", &a, &b)!=EOF)
	{
		ans = 1;
	
		if(b>=a/2)
		{
			j = 2;
			
			for(i=b+1 ; i<=a ; i++)
			{
				ans *= i;
				
				if(ans%j==0 && j<=a-b)
				{
					ans /= j;
					j++;
				}
			}
		}
		
		else if(b<a/2)
		{
			j = 2;

			for(i=a-b+1 ; i<=a ; i++)
			{
				ans *= i;

				if(ans%j==0 && j<=b)
				{
					ans /= j;
					j++;
				}
			}
		}
		
		printf("%lld\n", ans);
	}

	return 0;
}
