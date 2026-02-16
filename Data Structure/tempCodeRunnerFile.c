#include<stdio.h>
#include<stdlib.h>
typedef struct xy
{
    struct xy *next;
    int data;
    struct xy *prev;
}node;
node *head= NULL;
node *x;
node *y;
int n=0,pos=0;
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
node* delete_end(node* pt)
{
    head= pt;
    x= head;
    while(x->next!= NULL)
    {
        x= x->next;
    }
    y= x->prev;
    y->next= NULL;
    return(head);
}


node* first_node_delete(node* pt)
{
   
   
   node *head= pt;
   x=head->next;
   x->prev= head;
  
//    if(y!= NULL)
//    {
//         y->prev= head;
//    }
   return(head);
}
node* delete_btwn(node* pt,int index)
{
     head= pt;
   if (head == NULL || index <= 0) return head;
   
    Node* temp = head;
    int i = 1;

    // Traverse to the node at position 'index'
    while (temp != NULL && i < index) {
        temp = temp->next;
        i++;
    }

    // If index is out of bounds
    if (temp == NULL) return head;

    // If deleting the head node
    if (temp->prev == NULL) {
        head = temp->next;
        if (head != NULL) head->prev = NULL;
    } else {
        temp->prev->next = temp->next;
        if (temp->next != NULL) {
            temp->next->prev = temp->prev;
        }
    }

    free(temp);
    return head;

}
node* insertAtfirst(node* head,int data)  
{
    node *newnode= (node *)malloc(sizeof(node));
    newnode->data= data;
    newnode->prev = NULL;
    newnode->next = head;

    // If list is not empty, update previous head's prev pointer
    if (head != NULL) {
        head->prev = newnode;
    }

    // Move head to point to new node
    head = newnode;

}
node* insertAtbtwn(node* head,int data,int index)  
{
    int i=1;
    node *newnode=(node *)malloc(sizeof(node));
    node *temp= head;
    while(i!=(index-1))
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

node* insertAtlast(node* head,int data)  
{
    node *newnode= (node *)malloc(sizeof(node));
    node *temp= head;
    newnode->next= NULL;
    while(temp->next!=NULL)
    {
        temp= temp->next;
    }
    newnode->data= data;
    newnode->prev= temp;
    temp->next= newnode;
    return head;
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
        printf("found");
    }
    else
    {
        printf("not found");
    }
}
node* createnode(node* head, int data) 
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
void main()
{
    node *head= NULL;
    node *temp;
    int ch=0,i=0,num=0,val=0;
    char choice;
    
    printf("Enter how many nodes you need:\n");
    scanf("%d",&num);

    printf("Enter the data in the list\n");
    for(int i=1;i<=num;i++)
    {
        scanf("%d",&val);
        head = createnode(head, val);
    }
    temp= head;
    printf("Printing the first Linked List: \n");
    traversal(head);
    printf("\n Enter 1 to insert elemnets in the list,Enter 2 to delete elemnets in the list,Enter 3 to search,Enter 4 to reverse");
    printf("Enter your choice:\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        {
            printf("Enter F for inserting at front, B for inserting at between, enter E for inserting at end\n");
            printf("Enter your choice:\n");
            scanf(" %c",&choice);
            if(choice== 'F')
            {
                printf("Enter the value you want to enter:\n");
                scanf("%d",&n);
                insertAtfirst(head,n);
                traversal(head);
            }
            else if(choice== 'B')
            {
                printf("Enter the value you want to enter:\n");
                scanf("%d",&n);
                printf("Enter the position you want to delete:\n");
                scanf("%d",&pos);
                insertAtbtwn(head,n,pos);
                traversal(head);
            }
            else if(choice== 'E')
            {
                printf("Enter the value you want to enter:\n");
                scanf("%d",&n);
                insertAtlast(head,n);
                traversal(head);
            }
            else
            {
                printf("Wrong Choice");
            }
        }
        break;
        case 2:
        {
            printf("Enter F for deleting at front, B for deleting at between, enter E for deleting at end\n");
            printf("Enter your choice:\n");
            scanf(" %c",&choice);
            if(choice== 'F')
            {
               first_node_delete(head);
               traversal(head);
            }
            else if(choice== 'B')
            {
                printf("Enter the position you want to delete:\n");
                scanf("%d",&pos);
                delete_btwn(head,pos);
                traversal(head);
            }
            else if(choice== 'E')
            {
                delete_end(head);
                traversal(head);
            }
            else
            {
                printf("Wrong Choice");
            }
        }
        break;
        case 3:
        {
            search(head);
        }
        break;
        case 4:
        {
            
            node *temp = NULL;
            node *current = head;
            while (current != NULL)
            {
                temp = current->prev;
                current->prev = current->next;
                current->next = temp;
                current = current->prev; 
            }
            if (temp != NULL) 
            {
                head= temp->prev;
            }
            traversal(head);
        }
    }

    printf("\n");
    free(temp);
    free(head);
}