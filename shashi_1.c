#include<stdio.h>
struct name{
char arr[20];
}a;
void insert(){
	printf("Enter name : ");
	scanf("%s",&a);
}
void display(){
	printf("\nEntered name : %s",a.arr);
}
int main(){
	insert();
	display();
	return 0;
}