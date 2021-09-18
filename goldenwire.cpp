//array golden wire

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	int n,temp,i,j,min=0,ans=0,idx;
	cin>>n;
	vector<int> arr;
	
	for(i=0;i<n;i++)
	{
		cin>>temp;
		arr.push_back(temp);
	}
	
	temp = n;
	
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<temp-1;j++)
		{
			if(j == 0)
			{
				min = arr[j]+arr[j+1];
				idx = j;				
			}
			if((arr[j]+arr[j+1]) < min)
			{
				min = arr[j]+arr[j+1];
				idx = j;
			}
		}
//		cout<<"min : "<<min<<endl;
		arr[idx] = min;
		arr[idx+1] = 0;
		for(j=0;j<n-1;j++)
		{
			if(arr[j] == 0)
			{
				arr.erase(arr.begin()+j);
				arr.push_back(0);
			}
		}
		ans += min;
		temp--;
	}
	
	cout<<ans<<endl;
	
	return 0;
}
