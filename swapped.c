#include<stdio.h>
int main()
{
int a,b,c;
printf("First  integer : ",a);
scanf("%d",&a);
printf("Second integer : ",b);
scanf("%d",&b);
c = a;
a = b;
b = c;
printf("\nNow swapped:-\nFirst integer  : %d\nSecond integer : %d\n",a,b);
}