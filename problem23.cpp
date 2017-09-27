#include <stdio.h>
int main()
{
	
	int a,i;
	scanf("%d",&a);
	if (a%2==0)
	{
		for(i=1;i<=a;i++)
		{
			if(i%2==0)
			{
				printf("%d^2 = %d\n",i,i*i);
			}
		}
	}
	else
	{
		for(i=1;i<=a;i++)
		{
			if(i%2==0)
			{
				printf("%d^2 = %d\n",i,i*i);
			}
		}
	}

}
