#include<stdio.h>
int main(){
	int a=0,b=2,s=0;
	do{
	a++;
	if (a%b==0)
	s = s+a;
	}
	while(a<=20);
printf(" %d ",s);
}