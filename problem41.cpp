#include <stdio.h>
int main()
{
	int n,i;
	float a,b;
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%f", &a);
		scanf("%f", &b); 
		if (b==0)
		{
			printf("divisao impossivel\n");
		}
		else 
		{
			printf("%.1f\n", a/b);
		}
	}
return 0;
}
