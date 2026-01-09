#include<stdio.h>
#include<conio.h>
void sum();
void main()
{
	clrscr();
	sum();
	getch();
}

void sum()
{
	static int sum=0;
	int n,digits,i=0;
	printf("Enter how many numbers\n");
	scanf("%d",&n);
	printf("Enter negetive number to terminate\n");
	printf("Enter the numbers in the list\n");
	while(1&&(i<n))
	{
		scanf("%d",&digits);
		printf("\n");
		if(digits<0)
		{
			break;
		}
		sum=sum+digits;
		i++;
	}
	printf("The sum of the entered number in the list is:\n%d",sum);
}

