//number of participant

#include<iostream>
using namespace std;

int main()
{
	int size;
	cin>>size;
	int ans = 0;
	int ansd = 0;
	
	if(size%4 == 0)
	{
		ans = size/4;
		cout<<" A : "<<ans<<" B : "<<ans<<" C : "<<ans<<" D : "<<ans<<endl;
	}
	else if(size%4 != 0)
	{
		ans = size/4;
		ansd = (size/4) + (size%4);
		cout<<" A : "<<ans<<" B : "<<ans<<" C : "<<ans<<" D : "<<ansd<<endl;
	}
	
	return 0;
}

//number of participant
