#include <stdio.h>
int main()
{
	int a[1000],i,n,min,pos=0;
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(min>a[i])
		{
			min=a[i];
			pos=i;
		}
	}
	printf("Menor valor: %d\n",min);
	printf("Posicao: %d\n",pos);
}
