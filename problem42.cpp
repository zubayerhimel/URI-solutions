#include <stdio.h>
int main()
{
	int a,b,i,sum=0;
	int min,max;
	scanf("%d", &a);
	scanf("%d", &b);
	if (a>b)
	{
		min=b;
		max=a;
	}
	else 
	{
		min=a;
		max=b;
	}
	
	for(i=min; i<=max;i++)
	{
			if (i % 13 != 0)
			{
				sum+=i;
			}
	}
	printf("%d\n", sum);
}
