#include <stdio.h>
int main(){
	int a,b,c,d;
	b=2;
	c=1;
printf("\nEnter the number : ");
scanf("%d",&a);
	do{
	b++;
	d = a%b;
	if (d==0)
	c = c*b;
	}
	while(b<=a);
	if(c==a  ||  a==2)
	{printf("\nPrime\n");}
	else
	{printf("\nComposite\n");}
}