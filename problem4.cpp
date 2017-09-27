#include <stdio.h>

int main()
{
	int n,a,rA,rM,m,d;
	 scanf("%d", &n);
   	 a = n / 365;
   	 rA = n % 365;
	 rM = rA % 30;
     m = rA / 30;
	 d = rM % 30;
    printf("%d anos(s)\n%d mes(es)\n%d dia(s)\n", a,m,d);
}
