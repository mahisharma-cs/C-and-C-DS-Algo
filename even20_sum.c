#include<stdio.h>
int main()
{
int a,b,s=0;
b=2;
for (a=0 ; a<=20 ; a++)
if (a%b == 0)
	s = s+a;
	printf("\n %d \n",s);
}