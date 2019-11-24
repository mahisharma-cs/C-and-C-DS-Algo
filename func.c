#include<stdio.h>
int a=5;
int fun1()
{
	a=17;
	return 3;
}
int fun2()
{
	a=a+fun1();
	return a;
}
void main()
{
	printf("%d",fun2());
}