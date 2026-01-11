#include<stdio.h>
#include<stdlib.h>

typedef struct 
{
    int size;
    int top;
    int *A;
}s1;
void printStack(s1 *ptr);
void push(s1 *ptr, int val);
int isfull(s1* ptr);
int isempty(s1* ptr);
void main()
{
    int i=0,str[100],*p,length=0;
    s1 *k = (s1 *)malloc(sizeof(s1));
    k->size= 80;
    k->top= -1;
    k->A= (int *)malloc(k->size* sizeof(int));
    printf("Enter the size of the  stack:\n");
    scanf("%d",&length);
    p= (int *)malloc(length*sizeof(int));
    // pushing elements
    printf("Enter elemnts in the array:\n");
    for(i=0; i<length; i++)
    {
        scanf("%d",&p[i]);
        push(k, p[i]);
    }

    // print elements
    printStack(k);
    // freeing the stack
    free(k->A);
    free(k);
}

//checking whether stack is empty or not
int isempty(s1* ptr)
{
    if(ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

//checking whether stack is full or not
int isfull(s1* ptr)
{
    if(ptr->top == ptr->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

//pushing element into stack
void push(s1 *ptr, int val)
{
    if(isfull(ptr))
    {
        printf("Stack overflow\n");
    }
    else
    {
        ptr->top++;//traversing the pointer to next position
        ptr->A[ptr->top] = val;//injecting the value at that position
    }
}

void printStack(s1 *ptr)
{
    if(isempty(ptr))
    {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements: \n");
    for(int i = ptr->top; i >=0; i--)
    {
        printf("|_%d_|\n", ptr->A[i]);
    }
    printf("\n");
}
