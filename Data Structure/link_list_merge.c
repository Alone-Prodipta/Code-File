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
void search(node *pt)
{
    int key=0;
    int k=0;
    printf("Enter the number you want to find:\n");
    scanf("%d",&key);
    node *temp= pt;
    while(temp!=NULL)
    {
        if(key== temp->data)
        {
            k=1;
            break;
        }
        temp= temp->next;
    }
    if(k==1)
    {
        printf("found\n");
    }
    else
    {
        printf("not found\n");
    }
}
void main()
{
    node *head1= (node *)malloc(sizeof(node));
    node *two= (node *)malloc(sizeof(node));
    node *three= (node *)malloc(sizeof(node));
    node *four= (node *)malloc(sizeof(node));
    node *five= (node *)malloc(sizeof(node));

    node *head2= (node *)malloc(sizeof(node));
    node *second= (node *)malloc(sizeof(node));
    node *third= (node *)malloc(sizeof(node));
    
    head1->data= 78;
    head1->next= two;
    two->data= 82;
    two->next= three;
    three->data= 14;
    three->next= four;
    four->data= 16;
    four->next= five;
    five->data= 50;
    five->next= NULL;
    printf("Printing the first Linked List: \n");
    traversalPointer(head1);
    printf("\n");
    head2->data= 70;
    head2->next= second;
    second->data= 80;
    second->next= third;
    third->data= 61;
    third->next= NULL;
    printf("\nPrinting the second Linked List: \n");
    traversalPointer(head2);
    printf("\n\nLink List after merging:\n");
    five->next=head2;
    traversalPointer(head1);
    printf("\n");
    search(head1);
    free(head1);
    free(head2);
    free(two);
    free(three);
    free(four);
    free(second);
    free(third);
    free(five);
}