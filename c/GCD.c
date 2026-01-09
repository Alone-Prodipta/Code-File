#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,temp,num2,rem,max,min;
    //clrscr();
    printf("Enter any number in number1:\n");
    scanf("%d",&num1);
    printf("Enter any number in number2:\n");
    scanf("%d",&num2);
    if(num1>num2)
    {
        max= num1;
        min= num2;
    }
    else
    {
        max= num2;
        min= num1;
    }
    printf("The GCD(Greatest Common Division) is:\n");
    while(1)
    {
        rem= max%min;
        if(rem==0)
        {
            printf("%d",min);
            break;
        }
        else
        {
            temp=min;
            min=max%min;
            max=temp;
        }
    }
    getch();
}