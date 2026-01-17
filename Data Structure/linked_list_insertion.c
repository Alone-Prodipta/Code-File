#include<stdio.h>
#include<stdlib.h>

//creating a node data type
typedef struct lst
{
    int data;
    struct lst* next;
}node;
void traversalPtr(node* ptr);
node* insertAtfirst(node* head,int data);
node* insertAtbtwn(node* secd,int data,int index);
node* insertAtlast(node* head,int data);

//creating function for traversal
void traversalPtr(node* ptr)
{
    while(ptr!=NULL)
    {
        printf("Element:%d\n",ptr->data);
        ptr= ptr->next;
    }
}

//creating a function which will insert the created node at the starting position.

node* insertAtfirst(node* head,int data)  
{
    node* ptr;
    ptr= (node *)malloc(sizeof(node));
    ptr->next= head;
    ptr->data= data;
    return ptr;
}

/*insertAtfirst() is of the return type node,
with the argument head as a node datatype pointer
and data as the integet value in the new created node*/

node* insertAtbtwn(node* head,int data,int index)  
{
    int i=0;
    node* ptr;
    node* str= head;
    ptr= (node *)malloc(sizeof(node));
    while(i!=(index-1))
    {
        str= str->next;
        i++;
    }
    ptr->data= data;
    ptr->next= str->next;
    str->next= ptr; 
    return head;
}

node* insertAtlast(node* head,int data)  
{
    node* ptr;
    node* str= head;
    ptr= (node *)malloc(sizeof(node));
    //ptr->next= head;
    //ptr->data= data;

    while(str->next!= NULL)
    {
        str= str->next;
    }
        ptr->data= data;
        str->next= ptr;
        ptr->next= NULL;
    return head;
}
void main()
{
    node* head;
    node* thrd;
    node* secd;

    head= (node*)malloc(sizeof(node));
    secd= (node*)malloc(sizeof(node));
    thrd= (node*)malloc(sizeof(node));

    head->data= 49;
    head->next= secd;
    
    secd->data= 82;
    secd->next= thrd;

    thrd->data= 95;
    thrd->next= NULL;

    printf("Node before insertion\n");
    traversalPtr(head);
    printf("Node after insertion\n");
    head= insertAtfirst(head, 73);
    traversalPtr(head);
    printf("Node after insertion\n");
    head= insertAtbtwn(head, 52,2);
    traversalPtr(head);
    printf("Node after insertion\n");
    head= insertAtlast(head, 12);
    traversalPtr(head);
}
