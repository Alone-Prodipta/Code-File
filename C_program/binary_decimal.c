#include<stdio.h>
#include<math.h>
void main()
{
    int num,i=0,c=0,rem;
    int ar[100],sum=0;
    printf("Enter any number in binary:\n");
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%10;
        ar[i]=rem;
        i++;
        num=num/10;
    }
    printf("The decimal number is:\n");
    for(c=0;c<i;c++)
    {
        sum=sum+(ar[c]*pow(2,c));
    }
    printf("%d",sum);
    system("pause");
}