/* #include <stdio.h>
int main()
{
	double A,pi=3.14159;
	double R;
	scanf("%lf", &R);
	A=R*R*pi;
	printf("A=%.4lf\n", A);
}
*/

#include "iostream"
#include "stdio.h"

using namespace std;

int main()
{
	double a,pi=3.14159;
	double r;
	cin >> r;
	printf( "A=%.4lf\n", r*r*pi);
}
