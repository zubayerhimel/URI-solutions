#include <stdio.h>
int main()
{
	double a,b,c;
	scanf("%lf %lf %lf", &a, &b, &c);
	
		if (a>=(b+c))
    	{
	    	if (a==b==c)
	    	{
			printf("NAO FORMA TRIANGULO\n");
			printf("TRIANGULO EQUILATERO\n");
	    	}
			else if (a==b || a==c || b==c)
        	{
	    	printf("NAO FORMA TRIANGULO\n");
	    	printf("TRIANGULO ISOSCELES\n");
        	}
	
    	}
	
		if ((a*a)==((b*b)+(c*c)))
		{
			if (a==b==c)
			{
				printf("TRIANGULO RETANGULO\n");
	        	printf("TRIANGULO EQUILATERO\n");
			}
			else if (a==b || a==c || b==c)
         	{
	    	printf("TRIANGULO RETANGULO\n");
	    	printf("TRIANGULO ISOSCELES\n");
        	}
    	}

		if ((a*a)>((b*b)+(c*c)))
		{
			if (a==b==c)
			{
				printf("TRIANGULO OBTUSANGULO\n");
		    	printf("TRIANGULO EQUILATERO\n");
			}
			else if (a==b || a==c || b==c)
         	{
	     	printf("TRIANGULO OBTUSANGULO\n");
	    	printf("TRIANGULO ISOSCELES\n");
        	}
		}

		if ((a*a)<((b*b)+(c*c)))
		{
			if (a==b==c)
			{
    			printf("TRIANGULO ACUTANGULO\n");
		    	printf("TRIANGULO EQUILATERO\n");
			}
			else if (a==b || a==c || b==c)
        	{
	     	printf("TRIANGULO ACUTANGULO\n");	
	    	printf("TRIANGULO ISOSCELES\n");
         	}
		}
}
