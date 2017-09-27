#include <stdio.h>
int main()
{
	int n,min=0,max=0,i,j;
	int x,y;
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d", &x, &y);
		int sum=0;
		if (x<y)
		{
			min=x;
			max=y;
		}
		else 
		{
			min=y;
			max=x;
		}
		for(j=min+1; j<max; j++)
		{
			if(j%2==1 || j%2==-1)
			{
				sum+=j;
			}
		}
		printf("%d\n",sum);
	}
}
