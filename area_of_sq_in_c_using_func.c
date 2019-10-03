#include<stdio.h>
int myfunc(int side){
	return (side*side);
}
int main(){
	int s,Area;
	
	printf("Enter the side of the square: ");
	scanf("%d",&s);
	
	Area=myfunc(s);
	
	printf("\nThe area of square of side %d m is : %d sqm\n",s,Area);
	return 0;	
}