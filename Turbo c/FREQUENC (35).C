#include<stdio.h>
#include<conio.h>
int main()
{       clrscr();
	int i=0,m[10],t=0,j=0;
	printf("Enter ten number of your choice\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&m[i]);
	}
	for(i=0;i<9;i++)
	{
	    for(j=0;j<(9-i);j++)
	    {
		if(m[j]<m[j+1])
		{
		    t=m[j];
		    m[j]=m[j+1];
		    m[j+1]=t;
		}
	    }
	}
       for(i=0;i<10;i++)
       {
	   printf("%d\t",m[i]);
       }
       getch();
       return 0;
}
