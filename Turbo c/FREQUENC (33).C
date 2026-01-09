#include<stdio.h>
#include<conio.h>
//eta angsuman sir er logic die lekha.google er logic die noi.
int main()
{
clrscr();
  int num,rem,s,k;
  printf("Enter a number\n");
  scanf("%d",&num);
 // k=num;
  while(num>0)
  {
    rem=num%10;
    s=s+(rem*rem*rem);
    num=num/10;
   }
   if(s==num)
	printf("it is an armstrong number");
   else
	printf("it is not an armstrong number");
   getch();
   return 0;
}