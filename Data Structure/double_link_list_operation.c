#include<stdio.h>
#include<stdlib.h>
typedef struct xy
{
    struct xy *prev;
    int data;
    struct xy *next;
}node;
node *head= NULL;
void traversalPointer(node *newnode)
{
    node *head= newnode;
    node *temp= head;
    while(temp!= NULL)
    {
        printf("%d",temp->data);
        if(temp->next!=NULL)
        {
            printf(" -> ");
        }
        temp= temp->next;
    }
}
node *createnode(node *head, int data)
{
    node *newnode= (node *)malloc(sizeof(node));
    node *str;
    newnode->data= data;
    newnode->prev= NULL;
    newnode->next= NULL;

    if(head == NULL)
    {
        return newnode;
    }
    str= head;
    while(str->next!= NULL)
    {
        str= str->next;
    }
    str->next= newnode;
    newnode->prev= str;
    return head;
}
node *insertAtFirst(node *head,int data)
{
    node *newnode= (node *)malloc(sizeof(node));
    newnode->prev= head;
    head->prev= newnode;
    newnode->data= data;
    /*if(head != NULL)
    {
        head= head->next;
    }*/
    head= newnode;
    return head;
}
node *insertAtBtwn(int loc,node *head,int data)
{
    int i=1;
    node *newnode=(node *)malloc(sizeof(node));
    node *temp= head;
    while(i!=(loc-1))
    {
        temp= temp->next;
        i++;
    }
    newnode->next= temp->next;
    newnode->data= data;
    newnode->prev=temp;
    temp->next= newnode;
    if(newnode->next!= NULL)
    {
        newnode->next->prev= newnode;
    }
    return head;
}
node *insertAtLast(node *head, int data)
{
    node *newnode= (node *)malloc(sizeof(node));
    node *temp= head;
    while(temp->next!=NULL)
    {
        temp= temp->next;
    }
    newnode->data= data;
    newnode->next= NULL;
    newnode->prev= temp;
    temp->next= newnode;
    return head;
}
void main()
{
    
    int pos=0,i=0,val=0;
    printf("Enter the elements in the array:\n");
    for(i=1;i<=5;i++)
    {
        scanf("%d",&val);
        head = createnode(head,val);
    }

    traversalPointer(head);
    head= insertAtFirst(head, 88);
    printf("\nAfter inserting at first: \n");
    traversalPointer(head);
    printf("\nenter the position you want to enter:");
    scanf("%d",&pos);
    head= insertAtBtwn(pos,head, 91);
    printf("\nAfter inserting in between: \n");
    traversalPointer(head);
    head= insertAtLast(head, 99);
    printf("\nAfter inserting at last: \n");
    traversalPointer(head);
    free(head);
    
}
