#include<algorithm>
#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> stock;
	int val,days,i;
	cout<<"days : ";
	cin>>days;
	for(;days>0;days--)
	{
		cin>>val;
		stock.push_back(val);
	}
	cout<<endl;
	
	cout<<"max-profit : "<<(*max_element(stock.begin(),stock.end())) -	(*min_element(stock.begin(),stock.end()));
	
	
	
	return 0;
}
