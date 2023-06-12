#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	
	int a;
	int i,j;
	int ans;
	int count;
	int length;
	char string[1000000];
	
	scanf("%d", &a);
	
	for(i=1 ; i<=a ; i++)
	{
		ans = 0;
		count = 0;
		
		getchar();
		gets(string);
		length = strlen(string);
		
		for(j=0 ; j<length ; j++)
		{
			if(string[j]=='p')
			{
				count++;
			}
			
			else if(string[j]=='q' && count>0)
			{
				ans++;
				count--;
			}
		}
		
		printf("%d\n", ans);
	}
	
	return 0;
}
