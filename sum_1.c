#include<stdio.h>
int main(){
	int arr[50];
	int a,b,c=0;
	printf("Enter the size of array");
	scanf("%d",&a);
	for(b=0;b<a;b++){
	printf("Enter the element:");
	scanf("%d",arr[b]);
}
	for(b=0;b<a;b++)
	c = c+arr[b];
	printf("SUM=",c);
}