#include<stdio.h>
void reverse(){
	int c;
	if ((c=getc(stdin))!='\n')reverse();
	putc(c, stdout);
}
int main(){
	printf("Enter any text : ");
	printf("\n");
	reverse();
	printf("\n");
	return 0;
}