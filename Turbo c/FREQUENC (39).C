#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)
{
	int n=0,m=0,s=0,k=0,i=0;
	int ar[50];
	clrscr();
	printf("Enter any binary number to convert it in decimal");
	scanf("%d",&n);
	while(n>0)
	{
	   m=n%10;
	   n=n/10;
	   ar[i]=m;
	   i++;
	}
	for(k=0;k<=(i-1);k++)
	{
	  s=s+(ar[k]*pow(2,k));
	}
	printf("%d",s);
	getch();
       //	return 0;
}
