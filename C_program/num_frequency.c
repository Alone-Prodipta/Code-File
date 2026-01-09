#include<stdio.h>
void main()
{
    int num[100],n,find,i=0,count=0;
    printf("Enter any number:\n");
    scanf("%d",&n);
    printf("Enter the numbers in an array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    printf("Eneter the number whose frequency needs to be find:\n");
    scanf("%d",&find);
    for(i=0;i<n;i++)
    {
        if(num[i]==find)
        {
            count++;
            printf("The number is foound at position:%d\n",i+1);
        }
    }
      printf("The frequency of the number %d is:%d\n",find,count);
    system("pause");
}

