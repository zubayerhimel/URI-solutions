#include <stdio.h>
int main()
{
   int x;
   float y;
   scanf("%d", &x);
   scanf("%f", &y);
   if (x==1)
   {
    y*=4;
   }
   else if(x==2)
   {
   	y*=4.50;
   }
   else if(x==3)
   {
   	y*=5;
   }
   else if (x==4)
   {
   	y*=2;
   }
   else if(x==5)
   {
   	y*=1.50;
   }
   printf("Total: R$ %.2f\n",y);
}

