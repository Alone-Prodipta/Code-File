#include<stdio.h>
#include<stdlib.h>
typedef struct xy
{
    int data;
    struct xy *next;
}node;
void traversal(node *pt)
{
    node* head= pt;
    node* temp= head;
    while(temp!=NULL)
    {
        printf("%d", temp->data);
        if(temp->next!=NULL)
        {
            printf(" -> ");
        }
        temp= temp->next;
    }
}
/*node* insertAtlast(node* head,int data)  
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
}*/
node* insertAtlast(node* head, int data) {
    node* ptr = (node*)malloc(sizeof(node));
    ptr->data = data;
    ptr->next = NULL;

    if (head == NULL) {
        return ptr;  // first node becomes head
    }

    node* str = head;
    while (str->next != NULL) {
        str = str->next;
    }
    str->next = ptr;
    return head;
}
void main()
{
    node *head1= NULL;
    node *temp;
    int ch=0,i=0;char choice,val=0;
    node *head2= NULL;
    printf("\n");
    printf("Enter the data in the list\n");
    for(int i=1;i<=5;i++)
    {
        scanf("%d",&val);
        head1= insertAtlast(head1, val);
    }
    //temp= head1;
    printf("Printing the first Linked List: \n");
    traversal(head1);
}