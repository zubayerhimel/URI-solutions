#include <stdio.h>
int main()
{
	int n,a,b,i,sum=0,count=0;
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &a);
		scanf("%d", &b);
		while(count<b)
		{
			if (a%2!=0)
			{
				sum+=a;
				count++;
			}
			a++;
		}
		printf("%d\n",sum);
		sum=0;
		count=0;
	}
}
