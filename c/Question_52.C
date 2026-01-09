//Question 52
#include<stdio.h>
//#include<conio.h>
int main()
{
       int *pt1,*pt2;
       int num1,num2;
       //clrscr();
       printf("Enter any two number of your choice:\n");
       scanf("%d",&num1);
       scanf("%d",&num2);
       pt1=&num1;
       pt2=&num2;
       printf("................Before swapping................\n");
       printf("num1= %d\n",num1);
       printf("num2= %d\n",num2);
       printf("Memory address of num1= %u\n",pt1);
       printf("Memory address of num2= %u\n",pt2);
       printf("................After swapping................\n");
      *pt1=*pt1+*pt2;
      *pt2=*pt1-*pt2;
      *pt1=*pt1-*pt2;
       printf("num1= %d\n",num1);
       printf("num2= %d\n",num2);
       printf("Memory address of num1= %u\n",pt1);
       printf("Memory address of num2= %u\n",pt2);
       //getch();
       return 0;
}
