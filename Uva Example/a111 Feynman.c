#include <stdio.h>

int main()
{
	
	int a;

	while(scanf("%d", &a)!=EOF && a!=0)
	{
		printf("%d\n", (a*(a+1)*(2*a+1)/6));
	}
	
	return 0;
}
