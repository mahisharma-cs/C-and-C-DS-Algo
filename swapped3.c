#include<stdio.h>
int main()
{
int a,b,c,d;
printf("First  integer : ",a);
scanf("%d",&a);
printf("Second integer : ",b);
scanf("%d",&b);
printf("Third integer  : ",c);
scanf("%d",&c);
d = a;
a = b;
b = c;
c = d;
printf("\nNow swapped:-\nFirst integer  : %d\nSecond integer : %d\nThird integer  : %d",a,b,c);
}