#include <stdio.h>
int main(){
	int a,b,c,d;
	b=2;
	c=1;
printf("Enter the number : ");
scanf("%d",&a);
	while(b<=a){
	b++;
	d = a%b;
	if (d == 0)
	c = c*b;
	
	}
	if (c==a || a==2)
	{printf("\nPrime\n");}
	else
	{printf("\nComposite\n");}
	

}