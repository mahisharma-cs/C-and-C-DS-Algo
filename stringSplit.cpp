//string split 100% working

#include<iostream>
#include<vector>
#include<array>
#include<algorithm>
using namespace std;

vector<string> arr;

void add(string str, int n, int maxlen)
{
	int i;
	string newstr = "";
	for(i=n;i<(maxlen+n);i++)
		newstr += str[i];
	
	arr.push_back(newstr);
}

int main()
{
	string str;
	cin>>str;
	int size;
	cin>>size;
	
	int maxlen = str.size() - size + 1;
	int temp = maxlen;
	
	while(temp--)
	{
		for(int i=0;i<maxlen;i++)
			add(str,i,maxlen);
	}
	
	sort(arr.begin(),arr.end());
	
	reverse(arr.begin(),arr.end());
	
	cout<<arr[0]<<endl;
	
	return 0;
}
