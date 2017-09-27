#include <stdio.h>
int main()
{
	int n,i;
	scanf("%d", &n);
	while (n!=0)
	{
		for(i=1;i<=n;i++)
		{
			printf("%d", i);
			if (i!=n)
			{
				printf(" ");
			
			}
		
		}
			printf("\n");
		scanf("%d",&n);
	}
}
