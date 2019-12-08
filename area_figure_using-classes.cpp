#include<iostream>
#include<cmath>
#define pi 3.1415 
using namespace std;

class param{
	public:
		float s1,s2,s3,length,breadth,radius;
		};
class tri:public param{
	public:
		void takeparam(){
			cout<<"Enter the sides of triangle:\n";
			cin>>s1>>s2>>s3;
		}
		void area(){
			double a,b,c,d,e,area;
			a=(s1+s2+s3)/2;
			b=(a-s1);
			c=(a-s2);
			d=(a-s3);
			e=a*b*c*d;
			area=sqrt(e);			
	
			cout<<"\nThe area of triangle: "<<area<<endl;

		}
};
class rec:public param{
	public:
		void takeparam(){
			cout<<"\nEnter the Dimensions of rectangle:\n";
			cin>>length>>breadth;
		}
		void area(){
			cout<<"The area of rectangle:"<<length*breadth<<endl;
		}
};
class cir:public param{
	public:
		void takeparam(){
			cout<<"\nEnter the radius of circle:";
			cin>>radius;
		}
		void area(){
			cout<<"\nThe area of circle is:"<<pi*radius*radius;
			cout<<"\n";
		}
};
int main(){
	int opt;
	cout<<"Enter the shape number for which you want to calculate area:";
	cout<<"\n1) Triangle\n2) Rectangle\n3) Circle\n";
	cin>>opt;	
	if(opt==1){
		tri M1;
		M1.takeparam();
		M1.area();
	}	
	
	if(opt==2){
		rec M2;
		M2.takeparam();
		M2.area();
	}
	
	if(opt==3){
		cir M3;
		M3.takeparam();
		M3.area();
	}
	
	return 0;
}

