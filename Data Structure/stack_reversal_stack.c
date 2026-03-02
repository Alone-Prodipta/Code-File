#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int top;
    int *arr;
    int size;
} stack;

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

void push(stack *pt, int item) 
{
    if (isfull(pt)) 
    {
        printf("Stack overflow!\n");
        return;
    }
    pt->arr[++pt->top] = item;
}

int pop(stack *pt) 
{
    if (isempty(pt)) 
    {
        printf("Stack underflow!\n");
        return -1;
    }
    return pt->arr[pt->top--];
}

int main() 
{
    stack *s = (stack*)malloc(sizeof(stack));
    stack *store = (stack*)malloc(sizeof(stack));
    int length, item;

    s->size = 100;
    s->top = -1;
    s->arr = (int*)malloc(s->size * sizeof(int));

    store->size = 100;
    store->top = -1;
    store->arr = (int*)malloc(store->size * sizeof(int));

    printf("Enter the size of the stack:\n");
    scanf("%d", &length);

    printf("Push elements in the stack:\n");
    for (int i = 0; i < length; i++) 
    {
        scanf("%d", &item);
        push(s, item);
    }

    printf("\nStack after entering elements:\n");
    for (int i = s->top; i >= 0; i--) 
    {
        printf("|_%d_|\n", s->arr[i]);
    }

    
    while (!isempty(s)) 
    {
        item = pop(s);
        push(store, item);
    }

    printf("\nStack after reversing:\n");
    for (int i = store->top; i >= 0; i--) 
    {
        printf("|_%d_|\n", store->arr[i]);
    }
    free(s->arr);
    free(store->arr);
    free(s);
    free(store);
    return 0;
}