#include <stdio.h>
int main()
{
	int i,n,m,k,mod=0;
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &m);
		{
			for(k=1;k<=m;k++)
			{
				if (m%k==0)
				{
					mod=mod+1;
				}
			}
		}
			if(mod==2)
			{
				printf("%d eh primo\n",m);
			}
			else 
			{
				printf("%d nao eh primo\n",m);
			}
			mod=0;
	}
}
