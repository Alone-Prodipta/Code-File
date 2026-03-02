#include <stdio.h>
#include <stdlib.h>
typedef struct pointer
{
    int front;
    int rear;
    int size;
    int *arr;
} queue;

int isFull(queue *q) 
{
    if(q->rear == q->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty(queue *q) 
{
    if(q->rear < q->front)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enqueue(queue *list, int val) 
{
    if (isFull(list)) 
    {
        printf("Queue is full\n");
    }
    else 
    {
        list->rear++;
        list->arr[list->rear] = val;
    }
}
int dequeue(queue *list) 
{
    int a= -1;
    if (isEmpty(list)) 
    {
        printf("Queue is empty\n");
    }
    else 
    {
        list->front++;
        a= list->arr[list->front];
    }
    return a;
}

void display(queue *list) 
{
    if (isEmpty(list)) 
    {
        printf("Queue is empty\n");
    } else 
    {
        printf("Queue elements: ");
        for (int i = list->front; i <= list->rear; i++) 
        {
            printf("%d ", list->arr[i]);
        }
        printf("\n");
    }
}

int main() 
{
    queue *q = (queue *)malloc(sizeof(queue));
    printf("Enter the size of the queue:\n");
    scanf("%d", &q->size);
    q->front = 0;
    q->rear = -1;
    q->arr = (int *)malloc(q->size * sizeof(int));
    int data = 0, i = 0;
    for(i = 0; i < q->size; i++)
    {
        printf("Enter the data in the queue: ");
        scanf("%d", &data);
        enqueue(q, data);
    }

    display(q);
    printf("Dequeueing the list:\n");
    dequeue(q);
    display(q);

    if (isEmpty(q)) 
    {
        printf("Queue is empty\n");
    }
    if (isFull(q))
    {
        printf("Queue is Full\n");
    }

    free(q->arr);
    free(q);
    return 0;
}