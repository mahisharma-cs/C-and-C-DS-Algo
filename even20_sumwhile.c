#include<stdio.h>
int main(){
	int a,b,s=0;
	a=0;
	b=2;

	while(a<=20){
	a++;
	if (a%b == 0)
	s = s+a;
	}
printf(" %d ",s);
}