#include <stdio.h>
int main()
{
	int n,i;
	double a,b,c,result;
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		scanf("%lf", & a);
		scanf("%lf", &b);
		scanf("%lf", &c);
		result= (a/10)*2 + (b/10)*3 + (c/10)*5;
		printf("%.1lf\n", result);
	}
}
