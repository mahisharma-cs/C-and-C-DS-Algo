#include<iostream>
using namespace std;
class base{
	public:
		base(){
			cout<<10<<" ";
		}
		base(int x){
			cout<<10*x<<" ";
		}
};
class derive1:virtual public base{
	public:
		derive1(){
			cout<<20<<" ";
		}
		derive1(int x):base(x){
			cout<<20*x<<" ";
		}
};
class derive2:virtual public base{
	public:
		derive2(){
			cout<<30<<" ";
		}
		derive2(int x):base(x){
			cout<<30*x<<" ";
		}
};
class derive3:public derive1, public derive2{
	public:
		derive3(){
		cout<<40<<endl;
		}
		derive3(int x):derive1(x),derive2(x){
			cout<<40*x<<endl;
		}
};
int main(){
	derive3 d1;
	derive3 d2(10);
	return 0;
}