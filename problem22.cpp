#include <cstdio>
int main()
{
	int a,b,i;
	int sum=0;
	scanf("%d %d", &a, &b);
	for(i=a-1;i>=b+1;i--)
	{
		if (i%2!=0)
		{
			sum=sum+i;
		}
	}
	printf("%d\n",sum);
}
