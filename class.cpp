#include<iostream>
#include<cmath>

using namespace std;
class Area{
	private:
		int s1,s2,s3,a,b,c,AreaTri,d;
	void Entersides(){
		cout <<"Enter the sides of triangle:";
		cin>>s1>>s2>>s3;
		a=(s1+s2+s3)/2;
		b=a-s1;
		c=a-s2;
		d=a-s3;
		AreaTri=sqrt(a*b*c*d);
	void showarea(){
		cout<<"The area of Triangle:"<<ar;
	}

	public:
		int length,breadth;
	void Enterdimension(){
		cout<<"Enter length and breadth respectively:";
		cin>>length>>breadth;
	}
	int AreaCalculation(){
		return (length*breadth);
	}
	void showarea(){
		cout<<"Area of rectangle:"<<ok;
	}
};
class AreaRec:public Area{};
int main(){

	Area A1;
	int ok,ar;

	A1.Enterdimension();

ok=A1.AreaCalculation();
	A1.showarea;

	return 0;
}