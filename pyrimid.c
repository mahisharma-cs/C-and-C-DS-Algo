#include<stdio.h>
void main()
{
	int a=5,i,j,k;
	a=a*2;
	for(i=0;i>=a;i++)
	{
		for(j=i;j>a;j--)
		{
			printf(" p");
		}
		printf("\n");
	}
	for(i=0;i<a;i=i+2)
	{
		for(j=0;j<i+1;j++)
		{
			printf(" *");
		}
		printf("\n");
	}
}