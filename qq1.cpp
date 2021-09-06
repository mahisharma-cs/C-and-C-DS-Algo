#include<iostream>
using namespace std;

int main()

{
	string data;
	cin>>data;
	
	string res = "";
	
	res = res + char(data[0]+32);
	
	for(int i=1;i<data.size();i++)
	{
		if(data[i] >= 'A' && data[i] <= 'Z')
		{
			res = res + " " + char(data[i]+32);
		}
		else
		{
			res = res + data[i];
		}
	}
	cout<<res<<endl;
}
