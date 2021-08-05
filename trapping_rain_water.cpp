	#include<iostream>
#include<vector>
#include<algorithm>
#include<array>
//#include<queue>
using namespace std;

int main()
{

	vector<int> a;
	vector<int> temp;
	int n,i,ans = 0;
	int num,the_last_l=0,the_last_r=0;
	cout<<"enter n : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>num;
		a.push_back(num);
	}
	
//	int n = a.n() - 1;

		cout<<endl;	
	cout<<"a : ";
	for(int e=0;e<n;e++)
		cout<<a.at(e)<<" ";
	cout<<endl;


	for(int l=0;l<n;l++)
		temp.push_back(a.at(l));
	
//	cout<<endl;	
	
	reverse(temp.begin(),temp.end());
	
	cout<<"temp : ";
	for(int k=0;k<n;k++)
		cout<<temp.at(k)<<" ";
	
		cout<<endl;
		
		int left[n],right[n];
	
	for(i = 0;i<n;i++)
	{
		if(i == 0)
		{
			left[0] = a.at(i);
			the_last_l = left[0];
		}
		else if(the_last_l < a.at(i))
		{
			the_last_l = a.at(i);
			left[i] = the_last_l;
		}
		else
		{
			left[i] = the_last_l;
		}
	}

	cout<<"left : ";
	for(i = 0;i<n;i++)
		cout<<left[i]<<" ";
	cout<<endl;

	for(i = 0;i<n;i++)
	{
		if(i == 0)
		{
			right[0] = temp.at(i);
			the_last_r = right[0];
		}
		else if(the_last_r < temp.at(i))
		{
			the_last_r = temp.at(i);
			right[i] = the_last_r;
		}
		else
		{
			right[i] = the_last_r;
		}
	}

	reverse(right,right+n);

	cout<<"right : ";
	for(i = 0;i<n;i++)
		cout<<right[i]<<" ";
	cout<<endl;
	

	

	cout<<"min : ";
	for(i = 0;i<n;i++){
		cout<<min(left[i],right[i])<<" ";
		ans += ( min(left[i],right[i]) - a.at(i));
	}

	cout<<endl<<endl;
	cout<<"ans : "<<ans<<endl;
	
	return 0;

}
