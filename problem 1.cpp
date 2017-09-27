/* #include <stdio.h>
int main()
{
	int m,n;
	float o,a;
	scanf("%d", &m);
	scanf("%d", &n);
	scanf("%f", &o);
	a=n*o;
	printf("NUMBER = %d\n", m);
	printf("SALARY = U$ %.2f\n", a);
}
*/
#include <iostream>
using namespace std;

int main()
{
	int m,n;
	float o,a;
	cin >> m;
	cin >> n;
	cin >> o;
	a=n*o;
	cout << "NUMBER = " << m << endl;
	cout << "SALARY = " << a << endl;
}
