#include <stdio.h>
int main()
{
	int a,i,n=0,p;
	for(i=1;i<=100;i++)
	{
		scanf("%d", &a);
		if (n<a)
		{
			n=a;
			p=i;
		}
	}
	printf("%d\n%d\n", n,p);
}
