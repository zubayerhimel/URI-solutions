#include <stdio.h>
int main()
{
	int i,co=0,com=0;
    int n;
	scanf("%d", &n);
	if (n%2!=0)
	{
		i=n;
		while(co!=6)
		{
			printf("%d\n", i);
			co++;
			i+=2;
			if (co==6)
			{
				break;
			}
		}
	}
	else if(n%2==0)
	{
	    i=n+1;
	    while(com!=6)
		{
			printf("%d\n", i);
			com++;
			i+=2;
			if(com==6)
			{
				break;
			}
		}
	}
}
