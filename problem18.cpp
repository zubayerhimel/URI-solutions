#include <stdio.h>
int main()
{
   int n;
   int i,count=0;
   for(i=0;i<5;i++)
   {
   	scanf("%i", &n);
   	if(n<0)
   	{
   		n=-n;
	   }
   	if(n%2==0)
   	{
   		count++;
	   }
   }
   printf("%i valores pares\n", count);
}
