#include <stdio.h>
int main()
{
	float a,b,c,pre,area;
	scanf("%f %f %f", &a, &b ,&c);
	if(a+b>c && b+c>a && c+a>b)
	{
		pre= a+b+c;
		printf("Perimetro = %.1f\n",pre);
	}
	else
	{
		area=((a+b)/2)*c;
		printf("Area = %.1f\n", area);
	}
}
