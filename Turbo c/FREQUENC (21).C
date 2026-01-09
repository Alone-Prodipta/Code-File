#include<stdio.h>
#include<conio.h>
int length(char*);
char reverse(char*);
void main()
{
	char name[100],rev;
	int t,j;
	clrscr();
	printf("Enter your name");
	gets(name);
	t=length(name);
	printf("The length of your name is: %d\n",t);
	printf("The name after reversing\n");
	rev=reverse(name);
	printf("%c",rev);
	getch();
}
int length(char str[])
{       int i;
	for(i=0;str[i]!='\0';i++);
	return i;
}
char reverse(char str[])
{       int j;
	for(j=length(str);j>=0;j--)
	{
	     printf("%c",str[j]);
	}
	return str[j];
}

