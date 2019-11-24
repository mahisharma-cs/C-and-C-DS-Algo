#include<stdio.h>
int main()
{
int a,b;
printf("Enter an Integer : ");
scanf("%d",&a);
b=1;
while(a>0)
{b *= a ;
printf("Factorial : %d",b);
a--;
}
}