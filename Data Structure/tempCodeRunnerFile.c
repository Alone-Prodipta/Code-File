#include<stdio.h>
#include<ctype.h>
#include<conio.h>
void main()
{
    int ub=0,lb=0,mid=0,find=0,flag=0,i=0,n=0;
    int list[100],size=0;
    printf("Enter the size of the array:\n");
    scanf("%d",&size);
    printf("Enter the elements in the array:\n");
    for(n=0;n<size;n++)
    {
        scanf("%d",&list[n]);
    }
    char a,ch;
    int temp=0, ptr=0;
    int j=0,temp_str=0;
    printf("press 'A' for Ascending arrangemrnt and 'D' for descending arrangment\n");
    scanf(" %c",&a);
    if(a=='A'||a=='a')
    {
        printf("Press 'B' for Bubble sort,Press 'S' for Selection sort,Press 'I' for Insertion sort\n");       
        scanf(" %c",&ch);
        switch(ch)
        {
            case 'B':
            {
                for(i=0;i<size;i++)
                {
                    for(j=0;j<(size-i-1);j++)
                    {
                        if(list[j+1]<list[j])
                        {
                            temp_str= list[j];
                            list[j]= list[j+1];
                            list[j+1]=temp_str;
                        }
                    }
                }
                for(i=0;i<size;i++)
                {
                    printf("%d ",list[i]);
                }
            }
            break;
            case 'I':
            {
               
                for(i=1;i<size;i++)
                {
                    temp= list[i];
                    ptr= i-1;
                    while(ptr>=0 && list[ptr]>temp)
                    {
                        list[ptr+1]= list[ptr];
                        ptr--;
                    }
                    list[ptr+1]= temp;
                }
                for(i=0;i<size;i++)
                {
                    printf("%d ",list[i]);
                }
            }
            break;
            case 'S':
            {
                int min=0,str=0;
                for(i=0;i<(size-1);i++)
                {
                    min=i;
                    for(j=i+1;j<size;j++)
                    {
                        if(list[j]<list[min])
                        {
                            min=j;
                        }
                        str= list[i];
                        list[i]= list[min];
                        list[min]= str;
                    }
                }
                for(i=0;i<size;i++)
                {
                    printf("%d ",list[i]);
                }
            }
        }
    }
    else if(a=='D'||a=='d')
    {
        printf("Press 'B' for Bubble sort,Press 'S' for Selection sort,Press 'I' for Insertion sort");
        scanf(" %c",&ch);
        switch(toupper(ch))
        {
            case 'B':
            {
                for(i=0;i<size;i++)
                {
                    for(j=0;j<(size-i-1);j++)
                    {
                        if(list[j+1]>list[j])
                        {
                            temp_str= list[j];
                            list[j]= list[j+1];
                            list[j+1]=temp_str;
                        }
                    }
                }
                for(i=0;i<size;i++)
                {
                    printf("%d ",list[i]);
                }
            }
            break;
            case 'I':
            {
               
                for(i=1;i<size;i++)
                {
                    temp= list[i];
                    ptr= i-1;
                    while(ptr>=0 && list[ptr]<temp)
                    {
                        list[ptr+1]= list[ptr];
                        ptr--;
                    }
                    list[ptr+1]= temp;
                }
                for(i=0;i<size;i++)
                {
                    printf("%d ",list[i]);
                }
            }
            break;
            case 'S':
            {
                int min=0,str=0;
                for(i=0;i<(size-1);i++)
                {
                    min=i;
                    for(j=i+1;j<size;j++)
                    {
                        if(list[j]>list[min])
                        {
                            min=j;
                        }
                        str= list[i];
                        list[i]= list[min];
                        list[min]= str;
                    }
                }
                for(i=0;i<size;i++)
                {
                    printf("%d ",list[i]);
                }
            }
        }
    }
    else
    {
        printf("Wrong choice");
    }
}
