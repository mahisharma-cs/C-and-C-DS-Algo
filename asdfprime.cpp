#include<iostream>
using namespace std;

int main(){
	int num , a , b , c=1;
	cout<<"Enter a number : ";
	cin>>num;
	for(a=2 ; a<=num ; a++){
		b = num%a;
		if(b == 0){
			c = c*a;
		}
 	}
	if(c == num){
		cout<<"Prime";
	}
	else{
		cout<<"Composite";
	}
	
}