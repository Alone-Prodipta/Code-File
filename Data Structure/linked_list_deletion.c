#include<stdio.h>
#include<stdlib.h>
typedef struct list
{
    int data;
    struct list* next;
}node;
void traversal(node* pt)
{
    while(pt != NULL)
    {
        printf("Elemnts: %d\n",pt->data);
        pt= pt->next;
    }
}
node* delete_end(node* pt)
{
    if(pt == NULL)
        return NULL;
    if(pt->next == NULL)
    {
        free(pt);
        return NULL;
    }
    node* trav = pt;
    while(trav->next->next != NULL)
    {
        trav = trav->next;
    }
    node* temp = trav->next;
    trav->next = NULL;
    free(temp);
    return pt;
}


node* first_node_delete(node* pt)
{
    if(pt == NULL)
        return NULL;
    node* str = pt;
    pt = pt->next;
    free(str);
    return pt;
}
node* delete_btwn(node* pt,int index)
{
    if(pt == NULL)
        return NULL;
    if(index <= 0)
        return pt;
    if(index == 1)
        return first_node_delete(pt);

    int i = 1;
    node* ptr = pt;
    while(i < index-1 && ptr->next != NULL)
    {
        ptr = ptr->next;
        i++;
    }
    if(ptr->next == NULL)
        return pt; /* index out of range */
    node* temp = ptr->next;
    ptr->next = temp->next;
    free(temp);
    return pt;
}
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
    node* one;
    node* two;
    node* three;
    head= (node* )malloc(sizeof(node));
    one =(node* )malloc(sizeof(node));
    two =(node* )malloc(sizeof(node));
    three= (node* )malloc(sizeof(node));
    head->data= 52;
    head->next= one;
    
    one->data= 82;
    one->next= two;
    
    two->data= 46;
    two->next= three;

    three->data= 94;
    three->next= NULL;

    traversal(head);
    head=  first_node_delete(head);
    printf("After deletion:\n");
    traversal(head);

    head= delete_btwn(head,1);
    printf("After deletion:\n");
    traversal(head);

    head= delete_end(head);
    printf("After deletion:\n");
    traversal(head);

}