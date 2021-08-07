#include<iostream>
#include<set>
using namespace std;

int count = 0;

void repeat(int num)
{
	set<int> no;
	bool isunik = true;
	while(num > 0)
	{
		int d;
		d = num%10;
		if(no.count(d))
		{
			isunik = false;
			cout<<"num : "<<num<<endl;
		}
		no.insert(d);
		num /= 10;
	}
	if(isunik)
	{
		count++;
	}
}

int main()
{
	int start,end;
	cout<<"start end : ";
	cin>>start>>end;
	if(start >= end)
	{
		cout<<"INVALID INPUT"<<endl;
	}
	else
	{
		for(int i=start;i<end+1;i++)
		{
			repeat(i);		
		}
		cout<<count<<endl;
	}
	return 0;
}
