#include<stdio.h>
#include<conio.h>
typedef struct
{
	int num[3];
	float avg;
	float average;
	struct xy *next;
}node;
void main()
{
      node a;
      clrscr();
      a.num[0]=5;
      a.num[1]=7;
      a.num[2]=6;
      a.average=(a.num[0]+a.num[1]+a.num[2])/3;
      printf("%.2f",a.average);
      getch();
}
