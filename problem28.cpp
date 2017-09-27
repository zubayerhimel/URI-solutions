#include <stdio.h>

int main()
{
	float a,tk,f1,f2,f3;
	scanf("%f", &a);
	if (a<=2000)
	{
		printf("Isento\n");
	}
	else if(a>2000 && a<=3000)
	{
		f1= a-2000;
		f1= f1*.08;
		tk=f1;
	}
	else if (a>3000 && a<=4500)
	{
		f1=a-2000;
		f2=f1-1000;
		f1-=f2;
		f1=f1*.08;
		f2=f2*.18;
		tk=f1+f2;
	}
	else
	{
		f1=a-2000;
		f2=f1-1000;
		f3=f2-1500;
		f1-=f2;
		f2-=f3;
		f1=f1*.08;
		f2=f2*.18;
		f3=f3*.28;
		tk= f1+f2+f3;
	}
	printf("R$ %.2f\n",tk);
}
