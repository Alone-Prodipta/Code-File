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
//node* first_node_delete(node* pt);
node* first_node_delete(node* pt)
{
    node* str= pt;
    pt= pt->next;
    free(str);
    return(pt);
}
node* delete_btwn(node* pt,int index)
{
    int i=0;
    node* ptr = pt;
    node* temp;   
    while(i != (index-1))
    {
        ptr = ptr->next;
        i++;
    }
    if( ptr->next != NULL)
    {
        temp = ptr->next;
        ptr->next = temp->next;
        //free(temp);
    }
    return pt;
    pt= pt->next;
    free(ptr);
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

}