#include<stdio.h>
#include<stdlib.h>
typedef struct xy
{
    int data;
    struct xy *next;
}node;
void traversal(node *head)
{
    if (head == NULL) 
    {
        return;
    }
    node *temp = head;
    do 
    {
        printf("%d ", temp->data);
        temp = temp->next;
    } 
    while (temp != head);
    printf("\n");
}
node *createnode(node *head, int data)
{
    node *newnode = (node *)malloc(sizeof(node));
    newnode->data = data;
    newnode->next = NULL;
    if (head == NULL) 
    {
        newnode->next = newnode; 
        return newnode;
    } 
    else 
    {
        node *temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->next = head;
        return head;
    }
}
node *insertAtfirst(node *head,int data)
{
    node *newnode= (node *)malloc(sizeof(node));
    newnode->data= data;
    if (head == NULL) 
    {
        newnode->next = newnode;
        return newnode;
    }
    node *ptr= head;
    while(ptr->next!= head)
    {
        ptr= ptr->next;
    }
   
    newnode->next= head;
    head= newnode;
    ptr->next= newnode;
    return head;
}
node* insertAtbtwn(node* head,int data,int index)  
{
    int i=1;
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
    while(str->next!= head)
    {
        str= str->next;
    }
    ptr->data= data;
    str->next= ptr;
    ptr->next= head;
    return head;
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
    while(trav->next->next != pt)
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
    {
        return NULL;
    }
        
    node* str = pt;
    pt = pt->next;
    free(str);
    return pt;
}
node* delete_btwn(node* pt,int index)
{
    if (pt == NULL || index <= 0)
    {
        return pt;
    }
        
    if (index == 1) 
    {
        node *last = pt;
        while (last->next != pt)
        {
             last = last->next;
        }
           
        node *temp = pt;
        pt = pt->next;
        last->next = pt;
        free(temp);
        return pt;
    }
    node *curr = pt;
    for (int i = 1; i < index - 1; i++) 
    {
        curr = curr->next;
        if (curr->next == pt) 
        {
            return pt;
        }
            
    }
    node *temp = curr->next;
    curr->next = temp->next;
    free(temp);
    return pt;
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
void main()
{
    node *head= NULL;
    node *temp;
    int ch=0,i=0,num=0,val=0,n=0,pos=0;
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
                printf("Enter the position you want to enter:\n");
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
            node *prev = NULL;
            node *curr = head;
            node *next = NULL;
            if (head == NULL) 
            {
                traversal(head);
                break;
            }
            do 
            {
                next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
            } 
            while (curr != head);
            head->next = prev;
            head = prev;
            traversal(head);
        }
        default:
        {
            printf("wrong choice");
        }
    }
}



