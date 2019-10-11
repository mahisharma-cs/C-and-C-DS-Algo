#include <stdio.h>
#include <conio.h>
int main()
{
     int a[10], b, c, d = 0, average;
     printf("Enter the number of subjects: ");
     scanf("%d", &c);
     for(b=0; b<c; ++b)
     {
          printf("Enter number obtained in subject %d: ",b+1);
          scanf("%d", &a[b]);
          d += a[b];
     }
     average = d/c;

     printf("Average = %d", average);

     return 0;
	getch();
}