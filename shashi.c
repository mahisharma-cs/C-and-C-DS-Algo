#include<stdio.h>

struct name{
	char arr[20];
}a;
int insert(){
	printf("Enter name : ");
	scanf("%s",a);
}
void display(){
	printf("\nEntered name : %s",a);
}
int main(){
	insert();
	display();
	return 0;
}