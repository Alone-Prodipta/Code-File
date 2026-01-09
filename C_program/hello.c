#include<stdio.h>
void main()
{
   int i=0,n=0;
   printf("Enter how many number:\n");
   scanf("%d",&n);
   for(i=0;i<=n;i++)
   {
        
        if(i%2==0)
        {
            continue;
        }
        printf("%d\n",i);
   }
   system("pause");
}