#include <iostream> 
using namespace std; 
int search(int arr[], int n, int x) 
{ 
	int i; 
	for (i = 0; i < n; i++) 
		if (arr[i] == x) 
			return i; 
	return -1; 
} 

int main(void) 
{ 
	int arr[50]; 
	int x,n; 	
	cout<<"Enter the number of elements you want to enter : ";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Enter the "<<i+1<<" element : ";
		cin>>arr[i];
	}
	cout<<"Enter the element you want to search : ";
	cin>>x;
	int result = search(arr, n, x); 
	if(result==-1)
		cout<<"Element is not present in array";
	else
		cout<<"Element is present at position :" <<result+1;
return 0; 
} 
