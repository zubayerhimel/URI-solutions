#include <stdio.h>
int main()
{
	int a,al=0,ga=0,di=0;
	
	scanf("%d", &a);
	while(a!=4)
	{
		if (a==1)
		{
			al++;
		}
		if (a==2)
		{
			ga++;
		}
		if (a==3)
		{
			di++;
		}
		
		scanf("%d", &a);
	}
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n",al);
	printf("Gasolina: %d\n",ga);
	printf("Diesel: %d\n",di);
}
