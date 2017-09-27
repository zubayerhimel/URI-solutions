#include <stdio.h>
int main()
{
	int a,i,count=0,count1=0,pos=0,neg=0;
	for(i=0;i<5;i++)
	{
		scanf("%i", &a);
		if (a%2==0)
		{
			count++;
		}
		else
		{
			count1++;
		}
		if (a>0)
		{
			pos++;
		}
		else if (a<0)
		{
			neg++;
		}
	}
	printf("%i valor(es) par(es)\n%i valor(es) impar(es)\n%i valor(es) positivo(s)\n%i valor(es) negativo(s)\n", count,count1,pos,neg);
}
