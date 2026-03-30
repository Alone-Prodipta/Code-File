#include<stdio.h>
#include<stdlib.h>
typedef struct xy
{
    int data;
    struct xy *next;
}node;
void traversalPointer(node *pt)
{
    node* head= pt;
    node* temp= head;
    while(temp != NULL)
    {
        printf("%d", temp->data);
        if(temp->next != NULL)
        {
            printf(" -> ");
        }  
        temp = temp->next;
    }
}
void main()
{
    node *head= (node *)malloc(sizeof(node));
    node *node2= (node *)malloc(sizeof(node));
    node *node3= (node *)malloc(sizeof(node));
    node *node4= (node *)malloc(sizeof(node));
    node *node5= (node *)malloc(sizeof(node));
    node *x= (node *)malloc(sizeof(node));
    node *y= (node *)malloc(sizeof(node));

    head->data= 50;
    head->next= node2;

    node2->data= 80;
    node2->next= node3;

    node3->data= 67;
    node3->next= node4;

    node4->data= 42;
    node4->next= node5;

    node5->data= 31;
    node5->next= NULL;

    printf("printing the list:\n");
    traversalPointer(head);
    printf("\n");
    x= head->next;
    y= x->next;
    head->next= NULL;
    while(y!=NULL)
    {
        x->next=NULL;
        x->next= head;
        head= x;
        x= y;
        y= x->next;
    }
    x->next= head;
    head= x;
    traversalPointer(head);
    free(head);
    free(node2);
    free(node3);
    free(node4);
    free(node5);
}