// FileName:Bubble_Sort.c:
#include <stdio.h>
int main() {
	int data[] = {32, 71, 12, 45, 26};
	int i, A, n = 5, temp;
	printf("\n");
	for(i=0;i<5;i++){
		printf("%d ",data[i]);
	}
	printf("\n");
	for(A=0;A<n;A++){
		for(i =0;i<n;i++){
				if(data[i] > data[i+1]) {
				temp = data[i];
				data[i] = data[i+1];
				data[i+1] = temp;
			}
		}
	}
	for(i = 0; i < n; ++i){
		printf("%d ", data[i]);
	}
return 0;
}