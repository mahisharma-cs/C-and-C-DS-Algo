#include <stdio.h>
int main(){
	int a,b;
	a=0;b=2;
	do{
	if (a%b == 0)
	printf("\n %d \n",a);
	a++;
	}
	while(a<=20);
}