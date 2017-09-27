#include <stdio.h>
int main()
{
	int n,a,b,i,j,k,sum=0;
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &a);
		scanf("%d", &b);
		if (a>b || a==b)
		{
			for(j=a-1;j>=b+1;j--)
			{
				if(j%2!=0)
				{
					sum=sum+j;
				}
			}
			printf("%d\n", sum);
		}
		else if(b>a)
		{
			for(k=b+1; k<=a-1; k++)
			{
				if (k%2!=0)
				{
					sum=sum+k;
				}
			}
			printf("%d\n", sum);
			
		}
	}
}
