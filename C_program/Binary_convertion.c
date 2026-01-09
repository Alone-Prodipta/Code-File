#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void binary(int val);
int Decimal(int v,int b);
int c=0,r=0,ar[100],i=0;
void main()
{
    int k=0,sum=0;
    int num,rem=0,base=0,str=0;
    int j=0,bin[100],count=0;
    printf("Enter any base\n");
    scanf("%d",&base);
    printf("Enter any number\n");
    scanf("%d",&num);
    int p=1;
    while(Decimal(num,base)>0)
    {

        rem= Decimal(num,base)%10;
        if((rem-1)<(base+1))
        {
            //str= str+rem*p;
            num=num/10;
            //count++;
           // p=p*10;
        }
        else
        {
            k=1;
            break;
        } 
    }
    if(k==0)
    {
       // binary(rem);
        for(j=0;j<count;j++)
        {
            printf("%d",bin[j]);
        }
    }
    //end: printf("base is smaller than the digit of numbers");
}
void binary(int val)
{
    
    while(val>0)
    {
        r= val%2;
        ar[i++]= r;
        val= val/2;
    }
    for(c=(i-1);c>=0;c--)
    {
        printf("%d",ar[c]);
    }
}
int Decimal(int v,int b)
{
    int sum=0;
    while(v>0)
    {
        r= v%10;
        ar[i++]= r;
        v= v/10;
        for(c=(i-1);c>=0;c--)
        {
            sum= sum+(ar[c]*pow(b,c));
        }
        //return sum;
        printf("%d",sum);
    }
}