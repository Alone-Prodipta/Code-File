#include<stdio.h>
#include<conio.h>
int main()
{
 int i=0,max=0,min=0,m[10];
 clrscr();
 for(i=0;i<10;i++)
 {
	printf("enter a number\t");
	scanf("%d",&m[i]);
 }
 max=m[0];min=m[0];
 for(i=0;i<10;i++)
 {
	if(max<m[i])
	   max=m[i];
	if(min>m[i])
	   min=m[i];
       //	if((min<m[i])&&(max>m[i]))
	 //  min=m[i];
 }
 printf("%d is the greatest number\n",max);
 printf("%d is the smallest number",min);
 getch();
 return 0;
 }