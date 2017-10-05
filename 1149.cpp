#include <stdio.h>
int main()
{
	int a,b,sum=0,i;
	scanf("%d %d", &a,&b);
    while(b<1)

		scanf("%d", &b);
	
    for (i=0;i<b;i++)
	{
		sum+=a;
		a++;
	}
	printf("%d\n", sum);
}
