#include<stdio.h>
#include<stdlib.h>
typedef struct
{
    int top;
    int size;
    int *arr; 
}stack;
int isempty(stack *pt)
{
    if(pt->top== -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isfull(stack *pt)
{
    if(pt->top ==pt->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void main()
{
    stack *s=(stack*)malloc(sizeof(stack));
    int i=0,item=0,size=0,ch=0;
    int *pr,length=0;
    char option;
    s->size= 100;
    s->top= -1;
    s->arr= (int *)malloc(s->size* sizeof(int));
    printf("Enter the size of the stack\n");
    scanf("%d",&size);
    pr=(int *)malloc(size*sizeof(int));
    printf("Enter 1 to push the elements in the stack,2 to pop the elements in the array,3 to display the stack\n");
    printf("Enter your choice\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        {
            printf("Enter the elements in the array\n");
            for(i=0;i<size;i++)
            {
                scanf("%d",&pr[i]);
                item =pr[i];
                s->top++;
            }
            if(isfull(s))
            {
                printf("Stack is full\n");
            }
            printf("Do you want to display:\n");
            scanf(" %c",&option);
            if(option =='Y'||option=='y')
            {
                goto display;
            }
            else
            {
                return;
            }
        }
        break;
        case 2:
        {
            pop:printf("POPing the last elements:\n");
            item= pr[s->top];
            s->top--;
            for(i=s->top;i>=0;i--)
            {
                printf("|_%d_|\n",pr[i]);
            }
            if(isempty(s))
            {
                printf("stack is empty");
            }
            printf("Do you want to display:\n");
            scanf(" %c",&option);
            if(option =='Y'||option=='y')
            {
                goto display;
            }
            else
            {
                return;
            }
        }
        break;
        case 3:
        {
           display: printf("Displaying the stack:\n");
            for(i=s->top;i>=0;i--)
            {
                printf("|_%d_|\n",pr[i]);
            }
            printf("Do you want to POP:\n");
            scanf(" %c",&option);
            if(option =='Y'||option=='y')
            {
                goto pop;
            }
            else
            {
                return;
            }
        }
        break;
        default:
        {
            printf("Wrong choice");
        }
    }
}


