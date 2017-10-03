#include <stdio.h>
int main()
{
	double i,s=0,x=2;
	for(i=3;i<=39;i+=2,x*=2)
	{
		s= s+i/x;
	}
	s++;
	printf("%.2lf\n",s);
}
