#include <stdio.h>
int main()
{
	int a,b,i,min,max;
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
	for(i=min+1; i<max; i++)
	{
		if (i%5==2)
		{
			printf("%d\n",i);
		}
		if(i%5==3)
		{
			printf("%d\n",i);
		}
	}
}
