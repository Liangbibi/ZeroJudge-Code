#include <stdio.h>

int main()
{
	
	int a,b;
	int i,j,k,l,m;
	int count;
	int price;
	int Disk[4] = {250, 400, 500, 750};
	int Price[4] = {75, 110, 140, 250};
	
	while(scanf("%d %d", &a, &b)!=EOF)
	{
		i = 0;
		l = 10000;
		
		if(b==0)
		{
			while(i<4)
			{
				if(a%Disk[i]==0)
				{
					count = a/Disk[i];
				}
				
				else if(a%Disk[i]!=0)
				{
					count = a/Disk[i];
					count++;
				}
				
				price = Price[i]*count;
				
				if(price<l && count<=8)
				{
					j = i;
					k = count;
					l = price;
					m = Disk[i]*count;
				}
				
				i++;
			}
		}
		
		else if(b==1)
		{
			while(i<4)
			{
				if(a%Disk[i]==0)
				{
					count = a/Disk[i];
				}

				else if(a%Disk[i]!=0)
				{
					count = a/Disk[i];
					count++;
				}

				count *= 2;
				price = Price[i]*count;

				if(price<l && count<=8)
				{
					j = i;
					k = count;
					l = price;
					m = Disk[i]*(count/2);
				}

				i++;
			}
		}
		
		else if(b==5)
		{
			while(i<4)
			{
				if(a%Disk[i]==0)
				{
					count = a/Disk[i];
				}

				else if(a%Disk[i]!=0)
				{
					count = a/Disk[i];
					count++;
				}
				
				count++;
				price = Price[i]*count;

				if(price<l && count<=8)
				{
					j = i;
					k = count;
					l = price;
					m = Disk[i]*(count-1);
				}

				i++;
			}
		}
		
		printf("Qty: %d Disk: %dGB Price: $%d\n", k, Disk[j], Price[j]);
		printf("Total price of this %dGB array: $%d\n", m, l);
		printf("\n");
	}
	
	return 0;
}
