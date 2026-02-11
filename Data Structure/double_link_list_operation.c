#include<stdio.h>
#include<stdlib.h>
typedef struct xy
{
    struct xy *next1;
    int data;
    struct xy *next2;
}node;

void traversalPointer(node *pt)
{
    node *head= pt;
    node *temp= head;
    while(temp!= NULL)
    {
        printf("%d",temp->data);
        if(temp->next2!=NULL)
        {
            printf(" -> ");
        }
        temp= temp->next2;
    }
}
node *insertAtFirst(node *head,int data)
{
    node *pt= (node *)malloc(sizeof(node));
    pt->next1= NULL;
    pt->next2= head;
    pt->data= data;
    if(head != NULL)
    {
        head->next1= pt;
    }
    return pt;
}
node *insertAtBtwn(int loc,node *head,int data)
{
    int i=1;
    node *ptr=(node *)malloc(sizeof(node));
    node *temp= head;
    while(i!=(loc-1))
    {
        temp= temp->next2;
        i++;
    }
    ptr->next2= temp->next2;
    ptr->data= data;
    ptr->next1=temp;
    temp->next2= ptr;
    if(ptr->next2!= NULL)
    {
        ptr->next2->next1= ptr;
    }
    return head;
}
node *insertAtLast(node *head, int data)
{
    node *pt= (node *)malloc(sizeof(node));
    node *temp= head;
    while(temp->next2!=NULL)
    {
        temp= temp->next2;
    }
    pt->data= data;
    pt->next2= NULL;
    pt->next1= temp;
    temp->next2= pt;
    return head;
}
void main()
{
    node *head=(node *)malloc(sizeof(node));
    node *two=(node *)malloc(sizeof(node));
    node *three=(node *)malloc(sizeof(node));
    node *four=(node *)malloc(sizeof(node));
    int pos=0;
    head->data=45;
    head->next2=two;
    
    two->next1=head;
    two->data=78;
    two->next2= three;
    
    three->next1=two;
    three->data=50;
    three->next2= four;

    four->next1=three;
    four->data=48;
    four->next2= NULL;

    traversalPointer(head);
    // head= insertAtFirst(head, 88);
    // printf("\nAfter inserting at first: \n");
    // traversalPointer(head);
    // printf("\nenter the position you want to enter:");
    // scanf("%d",&pos);
    // head= insertAtBtwn(pos,head, 91);
    // printf("\nAfter inserting in between: \n");
    // traversalPointer(head);
    head= insertAtLast(head, 99);
    printf("\nAfter inserting at last: \n");
    traversalPointer(head);
    free(head);
    free(two);
    free(three);
    free(four);

}
