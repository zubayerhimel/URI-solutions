#include <stdio.h>
int main()
{
	int a,b,i,sum=0;
	
		scanf("%d", &a);
		scanf("%d", &b);
		while(a>0 && b>0)
		{
			
		
    	sum=0;
    	if(a>b)
    	{
    		
		
	  for(i=b; i<=a; i++)
	{
		printf("%d ",i);
		sum+=i;	
	}
}
    else if(b>a)
    {
    	for(i=a; i<=b;i++)
    	{
    		printf("%d ",i);
    		sum+=i;
		}
	}
	   printf("Sum=%d\n", sum);
	   scanf("%d %d",&a,&b);
   }
}
