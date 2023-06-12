#include <stdio.h>

int main()
{
	
	int a;
	int i;
	long long ans;
	
	ans = 1;
	
	scanf("%d", &a);
	
	printf("2^0 = 1\n");
	
	for(i=1 ; i<=a ; i++)
	{
		printf("2^%d = %lld\n", i, ans<<=1);
	}
	
	return 0;
}
