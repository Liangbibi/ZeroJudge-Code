#include <stdio.h>

int main()
{
	double a,b,c;
	
	while(scanf("%lf %lf %lf", &a, &b, &c)!=EOF)
	{
		if(a==0 && b==0 && c==0)
		{
			break;
		}
		
		printf("%.2lf %.2lf\n", a/b, b*c/a);
	}
	
	return 0;
}
