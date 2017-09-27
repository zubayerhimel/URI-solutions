#include <stdio.h>
int main()
{
	int i,a,tmp=1;
	scanf("%d", &a);
	for(i=1;i<=a;i++)
	{
		printf("%d %d %d\n",tmp,tmp*tmp,tmp*tmp*tmp);
		tmp++;
	}
}
