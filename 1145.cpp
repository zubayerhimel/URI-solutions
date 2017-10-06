#include <stdio.h>
int main()
{
	int a,b,i,sum;
	scanf("%d", &a);
	scanf("%d", &b);
	sum=a;
	for(i=1;i<=b;i++)
	{
		printf("%d ", i);
		if (i==sum)
		{
			printf("\n");
			sum+=a;
		}
	}
	printf("\n");
}
