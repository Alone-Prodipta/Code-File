#include<stdio.h>
void main()
{
    int rem,num,str[100],i=0,c=0;
    printf("Enter any number in decimal:\n");
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%2;
        str[c++]=rem;
        num=num/2;
    }
    printf("The binary number is:\n");
    for(i=(c-1);i>=0;i--)
    {
        printf("%d",str[i]);
    }
    system("pause");
}