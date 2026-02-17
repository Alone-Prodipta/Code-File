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
        newnode->next = newnode; // Point to itself
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
        // First node in the list
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
        return NULL;
    node* str = pt;
    pt = pt->next;
    free(str);
    return pt;
}
node* delete_btwn(node* pt,int index)
{
    if (pt == NULL || index <= 0)
        return pt;
    if (index == 1) {
        // Deleting the head node
        node *last = pt;
        while (last->next != pt)
            last = last->next;
        node *temp = pt;
        pt = pt->next;
        last->next = pt;
        free(temp);
        return pt;
    }
    node *curr = pt;
    for (int i = 1; i < index - 1; i++) {
        curr = curr->next;
        if (curr->next == pt) // index out of range
            return pt;
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
    }
}



/*#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
} Node;

Node *Head = NULL;
static int count;
void delete_front()
{
    if (Head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    Node *temp = Head;

    // Case 1: Only one node
    if (Head->next == Head)
    {
        int value = Head->data;
        free(Head);
        Head = NULL;
        printf("%d Deleted from the list\n", value);
        return;
    }

    // Case 2: More than one node
    Node *last = Head;

    // Find last node
    while (last->next != Head)
        last = last->next;

    int value = Head->data;

    Head = Head->next; // Move head forward
    last->next = Head; // Maintain circular link

    free(temp);

    printf("%d Deleted from the list\n", value);
}
void insertEnd(int value)
{
    Node *newnode = (Node *)malloc(sizeof(Node)), *temp = Head;
    if (newnode == NULL)
    {
        printf("Memory allocation failed");
        return;
    }
    newnode->data = value;
    if (temp == NULL)
    {
        Head = newnode;
        newnode->next = Head;
        newnode->prev = Head;
        count++;
    }
    else
    {
        while (temp->next != Head)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->prev = temp;
        newnode->next = Head;
        count++;
    }
}
void delete_position(int pos)
{
    Node *temp = Head, *deletenode;
    if (pos > count)
    {
        printf("\nPosition not found ");
        return;
    }
    int i;
    if (Head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    if (pos == 1)
    {
        delete_front();
        count--;
        return;
    }
    for (i = 1; i <= pos - 2; i++)
    {
        temp = temp->next;
    }
    deletenode = temp->next;
    temp->next = deletenode->next;
    deletenode->next->prev = temp;
    deletenode->next = NULL;
    deletenode->prev = NULL;
    printf("\n%d Delete from the list", deletenode->data);
    count--;
    free(deletenode);
}
void reverse()
{
    if (Head == NULL || Head->next == Head)
        return;

    Node *prev = NULL, *current = Head, *next = NULL;
    Node *last = Head;

    // Find last node
    while (last->next != Head)
        last = last->next;

    do
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    } while (current != Head);

    Head->next = prev;
    Head = prev;

    printf("List Reversed\n");

    printf("List Reversed\n");
}
void search(int key)
{
    Node *temp = Head;
    if (Head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    int pos = 1;

    do
    {
        if (temp->data == key)
        {
            printf("Found at position %d\n", pos);
            return;
        }
        temp = temp->next;
        pos++;
    } while (temp != Head);

    printf("Not found\n");
}
void display()
{
    Node *temp = Head;
    if (Head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    printf("\nDisplay list:- ");
    printf("Head <-> ");
    do
    {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    } while (temp != Head);
    printf(" Head\n");
}
int main()
{
    int choice, value;

    while (1)
    {
        printf("\n--- MENU ---\n");
        printf("1. Insert in List\n");
        printf("2. Delete from List\n");
        printf("3. Search in List\n");
        printf("4. Display List\n");
        printf("5. Reverse List\n");
        printf("6. Exit\n");

        printf("Enter your choice:- ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter value:- ");
            scanf("%d", &value);
            insertEnd(value);
            break;

        case 2:
            printf("Enter position to delete:- ");
            scanf("%d", &value);
            delete_position(value);
            break;

        case 3:
            printf("Enter value to search:- ");
            scanf("%d", &value);
            search(value);
            break;

        case 4:
            display();
            break;

        case 5:
            reverse();
            break;

        case 6:
            printf("\nExiting...\n");
            exit(1);

        default:
            printf("Invalid choice\n");
        }
    }
    free(Head);
    return 0;
}*/
