#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	long long a,b,c;
	long long x,y;
	long long i,j;
	int count;
	
	count = 0;
	
	scanf("%lld %lld %lld %lld", &a, &b, &x, &y);
	
	c = b-a;
	
	count += c/(llabs(x));
	count += c/(llabs(y));
	count -= c/(llabs(j));
	
	printf("%d\n", count);
}
