//Prime Number

#include<iostream>
using namespace std;

int main(){
	int i;
	int z;
	z=-1;
	long a,b=2,c=1,d;
	for (i=0;i<50;i++)
	{
		for(;b<=i;b++)
		{
			d = i%b;
			if(d==0)
			{
				c=c*b;
			}
		}
		if(c==i)
		{
			cout<<z+i<<" ";
			z=z+i;			
		}
		c=1;
		b=2;
	}
}