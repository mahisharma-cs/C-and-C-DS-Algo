#include<iostream>
using namespace std;

int main()
{
	int size,key,temp;
	cin>>size>>key;
	
	for(int i=0;i<size;i++)
	{
		cin>>temp;
		if(temp >= key)
		{
			cout<<i<<endl;
			break;
		}
	}
	return 0;	
}
