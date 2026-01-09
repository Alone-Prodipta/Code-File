#include<stdio.h>
#include<ctype.h>
void AP();
void GP();
int power(int base,int m);
int sum=0;//Using global variable
void main()
{
    char ch;
    printf("Enter 'A' for AP series and 'G' for GP series\n");
    printf("Enter your choice:\n");
    scanf("%c",&ch);
    switch(toupper(ch))
    {
        case 'A':
        {
            AP();
        }
        break;
        case 'G':
        {
            GP();
        }
        break;
        default:
        {
            printf("Wrong Choice.");
        }
    }
    system("pause");
}
void AP()
{
    int n=0,a=0,i=0,d=0,ap=0;
    printf("Enter any limit:\n");
    scanf("%d",&n);
    printf("Enter the first term of an AP series:\n");
    scanf("%d",&a);
    printf("Specify the common difference:\n");
    scanf("%d",&d);
    printf("The AP series is:\n");
    for(i=1;i<=n;i++)
    {
        ap= a+(i-1)*d;//Putting the formulae.
        printf("%d\t",ap);
        sum=sum+ap;
    }   
    printf("\nThe sum of the ap series is: %d",sum);
}
void GP()
{
    int n=0,a=0,i=1,r=0,gp=0;
    printf("Enter any limit:\n");
    scanf("%d",&n);
    printf("Enter the first term of th GP series:\n");
    scanf("%d",&a);
    printf("Specify the common ratio:\n");
    scanf("%d",&r);
    printf("The GP series is:\n");
    for(i=1;i<=n;i++)
    {
        gp= a*(power(r,(i-1)));//Putting the formulae.
        printf("%d\t",gp);
        sum= sum+gp;
    }               
    printf("\nThe sum of the GP series is: %d",sum);           
}
int power(int base,int m)
{
    int i=1,str=1;
    for(i=1;i<=m;i++)
    {
        str= str*base;
    }
    return str;
}