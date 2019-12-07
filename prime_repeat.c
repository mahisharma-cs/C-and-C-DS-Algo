#include<stdio.h>
void main()
{
	int num,a=2,b=1,i,z=0,ind=0,prev;
	printf("Enter number : ");
	scanf("%d",&num);
	int sum[num],prime[num];
	
	for(i=2;i<num/2;i++)
	{
		for(a=2;a<num/2;a++)
		{
			if(i%a==0)
			{
				b=b*a;
			}
		}
		
		if(b==i)
		{
			printf("%d ",i);
			prime[ind]=i;
			z=z+i;
			printf("z:%d  ",z);
			sum[ind] = z;
			ind++;
			
		}		
		a=2;b=1;
	}
	printf("\nd.. Sum array : ");
	for(i=0;i<ind;i++)
	{
		printf("| %d |",sum[i]);
	}
	printf("\nd.. Prime array : ");
	for(i=0;i<ind;i++)
	{
		printf("| %d |",prime[i]);
	}	
}