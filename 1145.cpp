#include <stdio.h>
int main()
{
	int a,b,i,j;
	scanf("%d",&a);
	scanf("%d", &b);
	for(i=1;i<=b;i++)
	{
		for(j=1;j<=a;j++)
		{
			printf("%d ", i);
		    while(j==a)
		    {
		    	printf("\n");
			}
		}
	}
}
