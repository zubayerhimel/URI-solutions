#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d %d", &a, &b);
	while (a!=b)
	{
		if (a>b)
		{
			printf("Decrescente\n");
		}
		else 
		{
			printf("Crescente\n");
		}
		scanf("%d %d", &a, &b);
	}
}
