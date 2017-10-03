#include <stdio.h>
int main()
{
	int n,i,a,sum=0,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &a);
		for(j=1;j<a;j++)
		{
			if (a%j==0)
			{
				sum = sum+j;
			}
	    }
			if (sum==a)
			{
				printf("%d eh perfeito\n",a);
			}
			else
			{
				printf("%d nao eh perfeito\n",a);
			}
		
		sum=0;
	}
}
