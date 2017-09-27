#include <stdio.h>
int mul(int a,int b)
{
	if (b%a==0)
	{
		printf("Sao Multiplos\n");
	}
	else
	{
		printf("Nao sao Multiplos\n");
	}
	return 0;
}
int main()
{
	int a,b;
	scanf("%d %d", &a, &b);
	mul(a,b);
	return 0;
}
