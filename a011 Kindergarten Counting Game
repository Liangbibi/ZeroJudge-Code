#include <stdio.h>
#include <string.h>

int main()
{
	
	char string[1000];
	int word;
	int Length;
	int i;
	
	while(scanf("%[^\n]s", string)!=EOF)
	{
		word = 0;
        
		Length = strlen(string);

  		for(i=0 ; i<Length ; i++)
		{
			if(isalpha(string[i]) && !isalpha(string[i+1]))
			{
				word++;
			}
  		}

		printf("%d\n", word);

		getchar();
	}
	
	return 0;
}
