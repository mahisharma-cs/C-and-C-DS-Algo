#include<iostream>
#include<queue>
#include<algorithm>

using namespace std;

int main()

{
	priority_queue<int> slider;
	int val,size,window,sum=0;
	cout<<"size : ";
	cin>>size;
	for(int i=0;i<size;i++)
	{
		cin>>val;
		slider.push(val);
	}
	cout<<endl;
	cout<<"window : ";cin>>window;
	for(;window>0;window--)
	{
		sum += slider.top();
		slider.pop();
	}
	cout<<endl;
	cout<<"max sum : "<<sum<<endl;
	return 0;
}
