#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int ino[4] = {101,102,103,104};
	int p[4] = {42,50,500,40};
	int s[4] = {10, 20, 15, 16};
	
	int ki,kq,i,idx = -1;
	
	cin>>ki;
	cin>>kq;
	
	for(i=0;i<4;i++)
	{
		if(ki == ino[i])
		{
			idx = i;
		}
	}
	
	if(idx == -1)
	{
		cout<<"INVALID INPUT"<<endl;
	}
	else
	{
		if(kq > s[idx])
		{
			cout<<"NO STOCK"<<endl;
			cout<<s[idx]<<" LEFT"<<endl;
		}
		else
		{
			printf("%.1f INR\n",float(p[idx]*kq));
			cout<<s[idx]-kq<<" LEFT"<<endl;
		}
	}
	
	return 0;
}
