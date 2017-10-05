#include <stdio.h>
int main()
{
	int n,count=0,sum=0;
	scanf("%d", &n);
	while(n!=0)
	{
		while(count!=5)
		{
			if(n%2==0)
			{
				sum+=n;
				count++;
			}
			n++;
		}
		printf("%d\n",sum);
		count=0;
		sum=0;
		scanf("%d", &n);
	}
}
