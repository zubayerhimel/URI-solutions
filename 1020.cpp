#include <stdio.h>
int main()
{
	int n,a;
	scanf("%d", &n);
    a = n/365;
    int ra = n%365;
    int rm =ra%30;
    int m = ra/30;
    int d = rm%30;
    
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",a,m,d);
}
