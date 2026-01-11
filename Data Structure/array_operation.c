#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int size=0,i=0,len=0;
int insert(int list[]);
int delete(int list[]);
int search(int list[]);
int sort(int list[]);
int merge(int list1[],int list2[]);
void main()
{
    char ch,op;
    int *pt,*pt2,j=0,k=0;
    printf("Enter the size of the array:\n");
    scanf("%d",&size);
    pt= (int*)malloc(size*sizeof(int));
    printf("Enter the elements in the array:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&pt[i]);
    }
    start:printf("Array operation\n");
    printf("Enter 'I' for Inserting, 'D' for Deletion, 'S'for Searching, 'O' for Arrenging, 'M' for Merging\n");
    printf("Enter your choice:\n");
    scanf(" %c",&ch);
    do
    {
        switch(toupper(ch))
        {
            case 'I':
            {
                insert(pt);
                break;
            }
            case 'D':
            {
                delete(pt);
                break;
            }
            case 'O':
            {
                sort(pt);
                break;
            }
            case 'S':
            {
                search(pt);
                break;
            }
            case 'M':
            {
                printf("Enter the size of the second array:\n");
                scanf("%d",&len);
                pt2=(int *)malloc(len*sizeof(int));
                printf("Enter the elements of the second array:\n");
                for(j=0;j<len;j++)
                {
                    scanf("%d",&pt2[j]);
                }
                merge(pt,pt2);
                break;
            }
            default:
            {
                printf("Wrong choice");
            }
        }
            printf("\nDo you want to continue?\n");
			printf("Press 'y' for 'yes' and 'n' for 'no'\n");
			scanf(" %c",&op);
			fflush(stdin);
			if(op=='n'||op=='N')
			{
				break;
			}
			if(op!='y'||op!='Y')
			{
				goto start;
			}	
	} 
	while(op=='y'||op=='Y');
	printf("You have exited!");
	system("pause");
}

int insert(int list[])
{
    int pos=0,ele=0;
    printf("Enter the position of insertion\n");
    scanf("%d",&pos);
    printf("Enter the element to be inserted\n");
    scanf("%d",&ele);
    for(i= (size-1); i>=pos; i--)
    {
        list[i+1]= list[i];
    }
    list[pos]=ele;
    size++;
    for(i=0;i<size;i++)
    {
        printf("%d ",list[i]);
    }
}

int delete(int list[])
{
    int pos=0;
    printf("Enter the position to be deleted:\n");
    scanf("%d",&pos);
    for(i=pos;i<size;i++)
    {
        list[i-1]=list[i];
    }
    size--;
    for(i=0;i<size;i++)
    {
        printf("%d ",list[i]);
    }
}

int search(int list[])
{
    char ch;
    int ub=size-1,lb=0,mid=0,find=0,flag=0,i=0;
    printf("Enter 'B' for binary search and 'L' for linear search\n");
    scanf(" %c",&ch);
    printf("Enter the number to be searched\n");
    scanf("%d",&find);
    switch(toupper(ch))
    {
        case 'B':
        {
            while(lb<=ub)
            {
                mid=(lb+ub)/2;
                if(list[mid]>find)
                {
                    ub= mid-1;
                }
                if(list[mid]<find)
                {
                    lb= mid+1;
                }
                if(list[mid]==find)
                {
                    flag=1;
                    break;
                }
            }
                if(flag==1)
                {
                    printf("Number found at position: %d",mid);
                }
                else
                {
                    printf("Number not found");
                }
                break;
        }
        case 'L':
        {
            for(i=0;i<=size;i++)
            {
                if(find==list[i])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                printf("Number found at position: %d",mid);
            }
            else
            {
                printf("Number not found");
            }
            break;
        }
        default:
        {
            printf("Wrong choice");
        }
    }
}

int sort(int list[])
{
    char a,ch;
    int j=0,temp_str=0;
    printf("press 'A' for Ascending arrangemrnt and 'D' for descending arrangment\n");
    scanf(" %c",&a);
    if(a=='A'||a=='a')
    {
        printf("Press 'B' for Bubble sort,Press 'S' for Selection sort,Press 'I' for Insertion sort,\nPress 'H' for Heap sort,Press 'Q' for Quick sort,Press 'M' for Merge sort,\nPress 'R' for Radix sort,Press 'C' for Counting sort,Press 'O' for Bucket sort,\nPress 'P' for Shell sort\n");       
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
        }
    }
    else if(a=='D'||a=='d')
    {
        printf("Press 'B' for Bubble sort,Press 'S' for Selection sort,Press 'I' for Insertion sort,\nPress 'H' for Heap sort,Press 'Q' for Quick sort,Press 'M' for Merge sort,\nPress 'R' for Radix sort,Press 'C' for Counting sort,Press 'O' for Bucket sort,\nPress 'P' for Shell sort\n");
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
        }
    }
    else
    {
        printf("Wrong choice");
    }
}
int merge(int list1[],int list2[])
{
    int list3[100],j=0,m=0;
    for(i=0;i<size;i++)
    {
        list3[i]=list1[i];
    }
    for(j=0;j<len;j++)
    {
        list3[i+j]=list2[j];
    }
    printf("The merged array is:\n");
    for(m=0;m<(i+j);m++)
    {
        printf("%d ",list3[m]);
    }
}

    