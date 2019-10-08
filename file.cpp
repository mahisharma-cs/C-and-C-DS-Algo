#include<string.h>
#include<iostream>
#include<fstream>
#include<string.h>
#include<stdio.h>
#include<conio.h>
using namespace std;


	class file{
		public:
		int roll;
		char name[20];
	};
		file e;

int main(){	
		file u;
	cout<<"Enter Data"<<endl;
	ofstream out;
	out.open("new_file.dat",ios::in|ios::app);
//	out.read((char*)&u,sizeof(u));
	while(!out.eof()){
		cin>>u.roll;
		gets(u.name);
		out.write((char*)&u,sizeof(u));
		break;
	}
	out.close();
	cout<<"Entered data"<<endl;
	ifstream in;
	in.open("new_file.dat",ios::in);
	in.read((char*)&e,sizeof(e));
	while(!in.eof()){
		cout<<e.roll<<"-";
		cout<<e.name<<"-";
		in.read((char*)&e,sizeof(e));
	}
	in.close();
	
	return 0;
}