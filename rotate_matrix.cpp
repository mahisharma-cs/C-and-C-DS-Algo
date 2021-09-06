#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int size,count = 1;
	cout<<"enter size : ";cin>>size;
	vector<vector<int>> arr( size , vector<int> (size));
	
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			arr[i][j] = count;
			count++;
		}
	}
	
	vector<vector<int>> temp = arr;
	
	cout<<endl;
	cout<<"matrix : ";
	cout<<endl;
	for (int q = 0; q < arr.size(); q++)
    {
        for (int w = 0; w < arr[q].size(); w++)
        {
            cout << arr[q][w] << "\t";
        }   
        cout << endl;
    }
    
    
	cout<<endl;
	cout<<"matrix-colckwise : ";
	cout<<endl;
	
	
	
	return 0;
}
