#include<iostream.h>
#include<conio.h>
#define pi 3.1415
void area(float,float);
void area(float);
void area(float a,float b){
	cout<<"The area of rectangle"<<a*b;
};
void area(float r){
	cout<<"The area of circle "<<pi*r*r;
};
int main(){
	clrscr();

	float a,b,r;
	int w;
	cout<<"Select Choice:";
	switch(w){
	case 1 :
	cout<<"Enter the sides of rectangle : ";

	cin>>a>>b;
	area(a,b);
	break;
	case 2:
	cout<<"\nEnter the radius of circle : ";
	cin>>r;
	area(r);
	break;

	getch();
}

}
