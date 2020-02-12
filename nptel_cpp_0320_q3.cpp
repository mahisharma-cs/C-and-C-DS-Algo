#include<iostream>
using namespace std;
int f(int *p){
	cout<<*p<<endl;
	return *p;
}
int main(){
	const int i=10;
	const int *ip=&i;
	int *p=const_cast<int*>(ip);
	f(p);
	return 0;
}