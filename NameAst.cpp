#include<iostream>
using namespace std;
/*
int main(){
	int n=5;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==0 || i==n || (i==j && ((i+j)<n)) ){
				cout<<"*";
				cout<<endl;
			}
		}
	}
	*/
	
	int main(){
		int n=5;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(j==0 || j==(n-1) || (i==j && ((i+j)<n)) || (i+j==(n-1) && i<(n/2))){
					cout<<" * ";
				}
				else{
					cout<<"   ";
				}
			}
			cout<<endl;
		}
	
	return 0;
}