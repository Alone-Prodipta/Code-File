#include<stdio.h>
void main()
{
    int n=0,i=0,j=0,flag=0,k=0;
    int ar[100],br[100],cnt[100];
    printf("Enter the number of terms:\n");
    scanf("%d",&n);
    printf("Enter the elements in the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        flag=0;
        for(j=0;j<k;j++)
        {
            if(ar[i]==br[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            br[k]=ar[i];
            cnt[k++]=1;
        }
        else
        {
            cnt[j]++;
        }
    }
    for(i=0;i<k;i++)
    {
        printf("%d= %d\n",br[i],cnt[i]);
    }
    system("pause");
}