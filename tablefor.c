#include <stdio.h>
int main(){
	int a, b;
	printf("Enter an integer: ");
	scanf("%d",&a);
	for(b=1; b<=10; b++)
	{
	printf("\n%d   %d's are %d \n", a, b, a*b);
	}
}