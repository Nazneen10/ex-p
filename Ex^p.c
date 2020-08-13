#include <stdio.h>
int main()
{
	int ex,p,c,i;
	printf("enter exponant and power");
	scanf("%d%d",&ex,&p);
	c=1;
	for(i=1;i<=p;i++)
	{
		c=c*ex;
	}
	printf("%d^%d=%d",ex,p,c);
	}
	
	
	
