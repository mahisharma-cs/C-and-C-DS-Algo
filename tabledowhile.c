#include<stdio.h>
int main(){
	int a,b,c;
	b=0;
	printf("\nEnter an Integer : ");
	scanf("%d",&a);
	do{
	b++;
	c = a*b;
	printf("\n%d   %d's are %d\n",a,b,c);
	}
	while(b<10);
}
