#include <stdio.h>
int main()
{
    double i,S=0; 
	for(i=1;i<=100;i++)
	{
		S=S+1/i;
	}
	printf("%.2f",S);
}
