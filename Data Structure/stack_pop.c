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
        
    }
    else
    {
        return 0;
    }
}
void main()
{
    stack *s=(stack*)malloc(sizeof(stack));
    int item=0,i=0;
    s->size= 5;
    s->top= -1;
    s->arr= (int *)malloc(s->size* sizeof(int));
    printf("Push elements in the stack:\n");
    for(i=0;i<s->size;i++)
    {
        scanf("%d",&s->arr[i]);
        item= s->arr[i];
        s->top++;
    }
    if(isempty(s))
    {
        printf("stack is empty");
    }
    else
    {
        printf("Stack is not empty\n");
        for(i=s->top;i>=0;i--)
        {
            printf("|_%d_|\n",s->arr[i]);
        }
    }
    if(isfull(s))
    {
        printf("stack overflows\n");
        printf("POPing the last elements:\n");
        item= s->arr[s->top];
        s->top--;
        for(i=s->top;i>=0;i--)
        {
            printf("|_%d_|\n",s->arr[i]);
        }
    }
}