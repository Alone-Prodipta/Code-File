#include<stdio.h>
#include<math.h>
#include<conio.h>
// eta holo google er logic onujayi armstrong number er program.
void main()
{
	int m,n,a,rem,c=0,s,k;
	clrscr();
	printf("Enter any number");
	scanf("%d",&n);
	 k=n;
	while(k>0)
	{
	   k/=10;
	  c++;
	 // printf("%d = %d\n",a,c);
	}
	 m=n;

	while(m>0)
	{
		rem=m%10;
		s=s+(pow(rem,c));
	       //	printf("%d +",s);
		m=m/10;
	}
	if(s==n)
		printf("1");
	else
		printf("0");
getch();
}