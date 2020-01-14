#include<iostream>
using namespace std;

int main()
{
	int n;
	char name[10];
	cout<<"Enter size : ";
	cin>>n;
	for(int i=0;i<n;i++)
		name[i]=(char)(65+i);
		
	cout<<"---->"<<name[3]<<"//"<<name[4]<<"//"<<name[5];
	return 0;
	
}