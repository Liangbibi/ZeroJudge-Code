#include <stdio.h>

int main()
{
	
	int count;
	float i;
	float a;
	float ans;
	
	while(scanf("%f", &a)!=EOF)
	{
		i = 2;
		ans = 0;
		count = 0;
		
		while(ans<a)
		{
			ans += 1/i;
			i++;
			count++;
		}
		
		printf("%d card(s)\n", count);
	}
	
	return 0;
}
