#include<stdio.h>
#include<conio.h>
void main()
{
	char date[100];
	int i,day=0,month=0,year=0,dd;
	clrscr();
	printf("Enter date in the format dd/mm/yyyy:\n");
	gets(date);
	for(i=0;date[i]!='/';i++)
	{
		day+=(date[i]-'0')*10;
		month=(date[i+2]-'0')*10+(date[i+3]-'0');
		year=(date[i+5]-'0')*1000+(date[i+6]-'0')*100+(date[i+7]-'0')*10+(date[i+8]-'0');
	}

	if(month>=1&&month<=12)
	{
		if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
		{
			dd=31;
		}
		if(month==4||month==6||month==9||month==11)
		{
			dd=30;
		}
		if(month==2)
		{
			if((year%100!=0&&year%4==0)||(year%400==0))
			{
				dd=29;
			}
			else
			{
				dd=28;
			}
		}
		if(day>=1&&day<=dd)
		{
			printf("Valid");
		}
		else
		{
			printf("Not Valid");
		}
	}

	getch();
}