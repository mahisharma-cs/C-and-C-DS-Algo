#include<iostream>
using namespace std;
int main(){
	char* p=new char;
	*p='A';
	cout << *p << endl;
	delete p;
	p=NULL;
	delete p;
	return 0;
}