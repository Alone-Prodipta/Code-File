#include<stdio.h>
#include<conio.h>
typedef struct 
{
    int day;
    int month;
    int year;
}date;
void main()
{
    int i=1,m=0,n=2,k,dd;
    //clrscr();
    date d1[2];
    for(i=0;i<n;i++)
    {
        printf("Enter any date\n");
        scanf("%d",&d1[i].day);
        printf("Enter the month\n");
        scanf("%d",&d1[i].month);
        printf("Enter the year\n");
        scanf("%d",&d1[i].year);
        printf("********************\n");
    }
    printf("********************\n");
    for(i=0;i<n;i++)
    {
        m=0;
    if(d1[i].month>=1&&d1[i].month<=12)
	{
		if(d1[i].month==1||d1[i].month==3||d1[i].month==5||d1[i].month==7||d1[i].month==8||d1[i].month==10||d1[i].month==12)
		{
			dd=31;
		}
		if(d1[i].month==4||d1[i].month==6||d1[i].month==9||d1[i].month==11)
		{
			dd=30;
		}
		if(d1[i].month==2)
		{
			if((d1[i].year%100!=0&&d1[i].year%4==0)||(d1[i].year%400==0))
			{
				dd=29;
			}
			else
			{
				dd=28;
			}
		}
		if(d1[i].day>=1&&d1[i].day<=dd)
		{
			m=1;
		}
	}
}
        if(m==1)
        {
            printf("valid\n");
        }
        else
		{
			printf("Not Valid\n");
		}
i=0,k=0;
        if(d1[i].day==d1[i+1].day)
        {
            if(d1[i].month==d1[i+1].month)
            {
                if(d1[i].year==d1[i+1].year)
                {
                      k=1;
                }
            }
        }
        if(k==1)
        {
            printf("The two dates are same.");
        }
        else
        {
            printf("The two dates are not same.");
        }
        getch();
    }