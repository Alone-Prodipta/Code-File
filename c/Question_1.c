#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    int a,b;
    //clrscr();
    printf("Enter a charecter for opretion(+,-,*,/):\n");
    scanf("%c",&ch);
    switch(ch)
    {
        case '+':
        {
            int sum;
            printf("Enter two numbers:\n");
            scanf("%d%d",&a,&b);
            sum=a+b;
            printf("Sum=%d",sum);            
        }
        break;
        case'-':
        {
            int sub;
            printf("Enter two numbers:\n");
            scanf("%d%d",&a,&b);
            sub=a-b;
            printf("Difference=%d",sub); 
        }
        break;
        case '*':
        {
            int mul;
            printf("Enter two numbers:\n");
            scanf("%d%d",&a,&b);
            mul=a*b;
            printf("Product=%d",mul); 
        }
        break;
        case '/':
        {
            int div;
            printf("Enter two numbers:\n");
            scanf("%d%d",&a,&b);
            div=a/b;
            printf("Division=%d",div); 
        }
        break;
        default:
        {
            printf("Wrong input");
        }
    }
    getch();
}