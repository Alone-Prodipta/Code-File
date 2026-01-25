#include<stdio.h>
#include<stdlib.h>
typedef struct list
{
    int data;
    struct list* next;
}node;
node* first_node_delete(node* pt)
{
    pt= pt->next;
    free(pt);
    return head;    
}
void main()
{
    node* head;
    node* dt;
    node* tri;
    head= (node* )malloc(sizeof(node));
    dt =(node* )malloc(sizeof(node));
    tri =(node* )malloc(sizeof(node));
    head->data= 52;
    head->next= dt;
    
    dt->data= 82;
    dt->next= tri;

    tri->data= 94;
    tri->next= NULL;

    while(head != NULL)
    {
        printf("Elemnts: %d\n",head->data);
        head= head->next;
    }
    printf("After deletion:\n");

    first_node_delete(head);
}