#include<stdio.h>
void main()
{
    int a,b,swap;
    printf("Enter any number in 'a':\n");
    scanf("%d",&a);
    printf("Enter any number in 'b':\n");
    scanf("%d",&b);
    
    /*logic 1*/
    //swap=a;
    //a=b;
    //b=swap;

    /*logic 2*/
    //a=a+b;
    //b=a-b;
    //a=a-b;

    /*logic 3*/
    a=a^b;
    b=a^b;
    a=a^b;
    printf("a=%d,\n b=%d",a,b);
    system("pause");
    
}