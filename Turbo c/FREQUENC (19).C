#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k=0;
	char str[100],store[100];
	clrscr();
	printf("Enter any text:\n");
	gets(str);
	for(i=0;str[i]!='\0';i++);
	for(j=i-1;j>=0;j--)
	{
		store[k++]=str[j];
	}
	store[k]='\0';
	puts(store);
     getch();
}


