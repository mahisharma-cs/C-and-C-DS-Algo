#include<iostream>
#include<fstream>
using namespace std;
int main(){
	int rno,m,i;
	char name;
	fstream data;
	
	data.open("file_first.dat",ios::out);
	for(i=0;i<2;i++){
		cin>>rno>>m;
		data<<rno<<"\t"<<m<<endl;
	}
	data.close();
	ifstream newobj;
	newobj.open("file_first.dat",ios::in);
	for(i=0;i<2;i++){
		newobj>>rno;
		cout<<rno;
	}
	newobj.close();
	
	
	return 0;
}