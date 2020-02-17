#include<stdio.h>
int main(){
	int arr[100];
	int ele,ins,i,j,size,newele;
	printf("Enter the number of element you want in array :");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		printf("Enter %d element :",i);
		scanf("%d",&arr[i]);
	}
	printf("Enter the element for which before you want to add an element:");
	scanf("%d",&ele);
	for(i=0;i<size;i++){
		if(arr[i]==ele){
			i=ins;
			for(j=1;j<size;j++){
				arr[i]=arr[i+j];
			}
		}
		
	}
	printf("Enter the new inserted element :");
	scanf("%d",&newele);
	newele=arr[ins];
	
	printf("The array is : ");
	for(i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
}