#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int size,ele,k;
	cin>>size;
	
	vector<int> arr;
	vector<int> rotate_arr;
	
	for(int i=0;i<size;i++)
	{
		cin>>ele;
		arr.push_back(ele);
	}
	
	cin>>k;
	
	for(int i=0;i<arr.size()-1;i++)
	{
		rotate_arr.push_back(arr.at(i+1));
	}
	
	rotate(rotate_arr.begin(),rotate_arr.begin()+k,rotate_arr.end());
	
	cout<<arr[0]<<" ";
	
	for(int j=0;j<arr.size()-1;j++)
	{
		cout<<rotate_arr.at(j)<<" ";
	}
	
	cout<<endl;
  return 0;
}
