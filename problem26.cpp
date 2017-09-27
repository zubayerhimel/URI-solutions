#include <stdio.h>
int main()
{
	int a[10000],n,i,count=0,count1=0;
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0;i<n;i++)
	{
		if (a[i]>=10 && a[i]<=20)
		{
		    count++;
		}
		else
		{
			count1++;
		}
	}
	printf("%d in\n", count);
	printf("%d out\n",count1);
}
