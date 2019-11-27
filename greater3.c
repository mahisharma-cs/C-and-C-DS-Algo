#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the  first number : ",a);
scanf("%d",&a);
printf("Enter the second number : ",b);
scanf("%d",&b);
printf("Enter the third  number : ",c);
scanf("%d",&c);
if (a>b && a>c)
printf("%d is greater than %d & %d",a,b,c);
else if (b>a && b>c)
printf("%d is greater than %d & %d",b,a,c);
else
printf("%d is greater than %d & %d",c,a,b);
}