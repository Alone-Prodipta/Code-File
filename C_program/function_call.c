//pow() function
#include<stdio.h>
int power(int n,int b);
void main()
{
    int base=0,indices=0;
    printf("Enter the base:\n");
    scanf("%d",&base);
    printf("Enter the power:\n");
    scanf("%d",&indices);
    printf("The result is:\n");
    power(indices,base);
    system("pause");
}
//Writing the pow() function block.
int power(int n,int b)
{
    int i=1,multi=1;
   for(i=1;i<=n;i++)
   {
        multi*=b;
   }
   printf("%d",multi);
}
    
