#include<iostream>
using namespace std;
int Add(int a,int b){
	return a+b;
}
double Addu(double a,double b){
	return a+b;
}
int main(){
	int a=10,b=20;
	int c=Add(a,b);
	double d=Addu(a,20.2);
	cout << c << "" << d << endl;
	return 0;
}