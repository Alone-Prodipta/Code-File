#include<stdio.h>
#include<stdlib.h>
typedef struct 
{
    int top;
    int *arr;
    int size;
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
    int item=0,i=0,*pr, length=0;
    s->size= 100;
    s->top= -1;
    s->arr= (int *)malloc(s->size* sizeof(int));
   
    printf("Enter the size of the stack:\n");
    scanf("%d",&length);    
     pr=(int *)malloc(length*sizeof(int));
    printf("Push elements in the stack:\n");
    for(i=0;i<length;i++)
    {
        scanf("%d",&pr[i]);
        item= pr[i];
        s->top++;
    }
    printf("Stack after entering elements:\n");
    for(i=s->top;i>=0;i--)
    {
        printf("|_%d_|\n",pr[i]);
    }
        printf("stack overflows\n");
        printf("POPing the last elements:\n");
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
    
}
