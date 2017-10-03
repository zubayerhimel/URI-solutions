#include <stdio.h>
int main()
{
	int n,count=0;
	double sum=0,avg=0;
	scanf("%d", &n);

	while(n>=0)
	{
		sum=sum+n;
		count++;
		scanf("%d", &n);
		if(n<0)
		{
			avg= sum/count;
				printf("%.2lf\n",avg);
				return 0;
		}
	}

}
