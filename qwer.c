#include<stdio.h>
int main(){
int a,b,c,d;
d=1;
printf("Enter the number :  ");
scanf("%d",&a);
for(b=2;b<=a;b++){
	c = a%b;
	if (c==0)
	d = d*b;
	
}
printf("+%d+",d=a);
if (d == a)
	printf("%d P\n",c);
}