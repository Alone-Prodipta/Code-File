#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *pt,num,j,i=0,k=0,target,sum[10];
    printf("Enter the array size:\n");
    scanf("%d",&num);
    pt=(int*)(malloc(num*sizeof(int)));
    printf("enter the elements of the array:\n");
    for(i=0;i<num;i++)
    {
        scanf("%d",&pt[i]);
    }
    printf("Enter traget number:\n");
    scanf("%d",&target);
    /*for(i=0;i<num;i++)
    {
        if((pt[i]+pt[i+1])==target)
        {
            printf("[%d, %d]",i,i+1);//this is not a generalized case.(logic 1)
        }
    }*/
   for(i=0;i<num;i++)
   {
        j=i+1;
        while(j<num)
        {
            if(pt[j]==target-pt[i])
            {
                sum[0]=i;
                sum[1]=j;
            }
            j++;
        }
   }
    printf("[%d, %d]",sum[0],sum[1]);
    free(pt);
    system("pause");
    //return 0;
}