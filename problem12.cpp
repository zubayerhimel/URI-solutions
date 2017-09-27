#include <stdio.h>
int main()
{
	float a,p,tm;
	scanf("%f",&a);
	if (a<=400)
	{
		p=15;
		tm= a+(a*p)/100;
	}
	else if (a>400 && a<=800)
	{
		p=12;
		tm=a+(a*p)/100;
	}
	else if (a>800 && a<=1200)
	{
		p=10;
		tm=a+(a*p)/100;
	}
	else if (a>1200 && a<=2000)
	{
		p=7;
		tm=a+(a*p)/100;
	}
	else 
	{
		p=4;
		tm=a+(a*p)/100;
	}
	
	printf("Novo salario: %.2f\n", tm);
	printf("Reajuste ganho: %.2f\n", tm-a);
	printf("Em percentual: %.0f %c\n",p,37);

}
