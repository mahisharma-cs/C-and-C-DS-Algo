#include<stdio.h>
int main()
{
	int a,b,c,d;
	c=1;
	for (a=0 ; a<=50 ; a++)
	{
	for(b=2 ; b<=a ; b++)
	{
	d = a%b;
	if (d==0)
	c = c*b;
	}
	if (c==a)
	{
	printf("%d",a);
	}
	}
}