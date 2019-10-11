#include<iostream>
using namespace std;
void swap(int *,int *);
int main(){
	int a,b;
	int *n,*m;
	cout<<"Enter the first  number : ";
	cin>>a;
	n=&a;
	cout<<"Enter the second number : ";
	cin>>b;
	m=&b;
	swap(n,m);
	cout<<"\n\nAfter swaping by call by reference\n\n";
	cout<<"The first  number : "<<a;
	cout<<"\nThe second number : "<<b;
	return 0;
};
void swap(int *q,int *w){
	int temp;
	temp=*q;
	*q=*w;
	*w=temp;
};