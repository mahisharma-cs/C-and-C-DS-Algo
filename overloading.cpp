#include<iostream.h>
#include<conio.h>
void sum(int,int);
void sum(float,float);
void sum(int a,int b){
	cout<<"The sum is"<<a+b;
	};
void sum(float c,float d){
	cout<<"The sum is"<<c+d;
};
void main(){
	clrscr();
	int a,b;
	float c,d;
	cout<<"Enter the value of a and b";
	cin>>a>>b;
	sum(a,b);
	cout<<"Enter the value of c and d";
	cin>>c>>d;
	sum(c,d);

	getch();
	}
