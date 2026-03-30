#include<stdio.h>
#include<stdlib.h>
typedef struct pointer
{
    int data;
    struct pointer *next;
}node;
node *head= NULL;
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
    
    node* trav = pt;
    while(trav->next->next != NULL)
    {
        trav = trav->next;
    }
    trav->next = NULL;
    return pt;
}

node* first_node_delete(node* head)
{
    if(head ==NULL)
    {
        return head;
    }
    head= head->next;
    return(head);
}
node* delete_btwn(node* pt,int index)
{
    int i=0;
    node* ptr = pt;
    node* temp;   
    while(i != (index-2))
    {
        ptr = ptr->next;
        i++;
    }
    if( ptr->next != NULL)
    {
        temp = ptr->next;
        ptr->next = temp->next;
    } 
        free(temp);
    return pt;
}
node* insertAtfirst(node* head,int val)  
{
    node *newnode= (node *)malloc(sizeof(node));
    if(newnode== NULL)
    {
        return head;
    }
    newnode->data= val;
    newnode->next= head;
    head= newnode;
    return newnode;
}
node* insertAtbtwn(node* head,int data,int index)  
{
    int i=0;
    node* ptr;
    node* str= head;
    ptr= (node *)malloc(sizeof(node));
    while(i!=(index-2))
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
    node* ptr = (node*)malloc(sizeof(node));
    ptr->data = data;
    ptr->next = NULL;

    if (head == NULL) 
    {
        return ptr;  // first node becomes head
    }

    node* str = head;
    while (str->next != NULL) 
    {
        str = str->next;
    }
    str->next = ptr;
    return head;
}
void main()
{
    node *head1= NULL;
    node *temp;
    int ch=0,i=0,num=0,val=0;
    char choice;
    node *head2= NULL;
    printf("Enter how many nodes you need:\n");
    scanf("%d",&num);

    printf("Enter the data in the list\n");
    for(int i=1;i<=num;i++)
    {
        scanf("%d",&val);
        head1 = createnode(head1, val);
    }
    temp= head1;
    printf("Printing the first Linked List: \n");
    traversal(head1);
    printf("\nEnter 1 to merge the list, Enter 2 to insert elemnets in the list,Enter 3 to delete elemnets in the list,Enter 4 to search,Enter 5 to reverse");
    printf("Enter your choice:\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        {
            printf("Enter how many nodes you need:\n");
            scanf("%d",&num);
            node *str;
            printf("Enter the data in the list\n");
            for(i=1;i<=num;i++)
            {
                scanf("%d",&val);
                head2 = createnode(head2, val);
            }
            str= head2;
            printf("Printing the second Linked List: \n");
            traversal(head2);
            printf("\nMerging the list\n");
            node* lastNode = head1;
            while(lastNode->next != NULL)
            {
                lastNode = lastNode->next;
            }
           
            lastNode->next = head2;
            traversal(head1);
        }
        break;
        case 2:
        {
            printf("Enter F for inserting at front, B for inserting at between, enter E for inserting at end\n");
            printf("Enter your choice:\n");
            scanf(" %c",&choice);
            if(choice== 'F')
            {
                printf("Enter the value you want to enter:\n");
                scanf("%d",&n);
                head1= insertAtfirst(head1,n);
                traversal(head1);
            }
            else if(choice== 'B')
            {
                printf("Enter the value you want to enter:\n");
                scanf("%d",&n);
                printf("Enter the position you want to delete:\n");
                scanf("%d",&pos);
                head1= insertAtbtwn(head1,n,pos);
                traversal(head1);
            }
            else if(choice== 'E')
            {
                printf("Enter the value you want to enter:\n");
                scanf("%d",&n);
                head1= insertAtlast(head1,n);
                traversal(head1);
            }
            else
            {
                printf("Wrong Choice");
            }
        }
        break;
        case 3:
        {
            printf("Enter F for deleting at front, B for deleting at between, enter E for deleting at end\n");
            printf("Enter your choice:\n");
            scanf(" %c",&choice);
            if(choice== 'F')
            {
               head1= first_node_delete(head1);
               traversal(head1);
            }
            else if(choice== 'B')
            {
                printf("Enter the position you want to delete:\n");
                scanf("%d",&pos);
                head1= delete_btwn(head1,pos);
                traversal(head1);
            }
            else if(choice== 'E')
            {
                delete_end(head1);
                traversal(head1);
            }
            else
            {
                printf("Wrong Choice");
            }
        }
        break;
        case 4:
        {
            search(head1);
        }
        break;
        case 5:
        {
            node *x;
            node *y;
            x= head1->next;
            y= x->next;
            head1->next= NULL;
            while(y!=NULL)
            {
                x->next=NULL;
                x->next= head1;
                head1= x;
                x= y;
                y= x->next;
            }
            x->next= head1;
            head1= x;
            traversal(head1);
        }
    }
    free(temp);
    
   free(head1);
    free(head2);
}
