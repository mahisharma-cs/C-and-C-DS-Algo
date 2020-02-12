#include<iostream>
using namespace std;
class B{
	public:
		virtual void f(){
			cout<<"10"<<" ";
		}
};
class D1:public B{
	public:
		void f() {
			cout<<"20"<<" ";
		}
};
class D2:public B{
	public:
		void f(){
			cout<<"30"<<" ";
		}
};
class DD:public D1,public D2{
	public:
		void f(){
			D2::f();
		}
};
int main(){
	B*bp=new DD;
	bp->f();
	return 0;
}