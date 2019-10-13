#include<stdio.h>
#include<stdlib.h>
#include<alloc.h>
int main(){
	int num,sum=0,i;
	int* M;
	printf("Enter the number you want to add:");
	scanf("%d",&num);
	M=(int*) malloc(num*sizeof(int));
	for(i=0;i<num;i++){
		printf("Enter number:");
		scanf("%d",M+i);
		sum+=*M+i;
	}
	printf("Sum = %d",sum);
	return 0;
}