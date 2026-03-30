#include<stdio.h>
#include<stdlib.h>
typedef struct pointer
{
   struct pointer *prev;
   int data;
   struct pointer *next;
}node;
void traversal(node *head)
{
   node *temp= head;
   while(temp!= NULL)
   {
      printf("%d",temp->data);
      if(temp->next!= NULL)
      {
         printf(" <-> ");
      }
      temp= temp->next;
   }
}
node *delete_first(node *head)
{
    node *temp= head;
    head= head->next;
    head->prev= NULL;
    return head;
}
node *delete_btwn(node *head, int index)
{
    int i = 0;
    node *temp = head;
    while (i != (index - 2))
    {
        temp = temp->next;
        i++;
    }
    
}
node *delete_end(node *head)
{
    node *temp= head;

    //Logic 1

    while(temp->next!= NULL)
    {
        temp= temp->next;
    }
    temp= temp->prev;
    temp->next= NULL;

    //logic 2

    /*if (head == NULL) 
    {
        // Empty list
        return NULL;
    }

    if (head->next == NULL) 
    {
        // Only one node
        free(head);
        return NULL;
    }

    node* temp = head;
    while (temp->next != NULL) 
    {
        temp = temp->next;
    }

    // temp is now the last node
    temp->prev->next = NULL;*/
    return head;
    free(temp);
}
node *insertAtfirst(node *head,int val)
{
   node *newnode= (node *)malloc(sizeof(node));
   newnode->data= val;
   newnode->prev= NULL;
   newnode->next= head;
   if(head!= NULL)
   {
      head->prev= newnode;
   }
   head= newnode;   
   return head;
}
node *insertAtlast(node *head,int val)
{
    node *temp= head;
    node *newnode= (node *)malloc(sizeof(node));
    newnode->data= val;
    newnode->next= NULL;
    while(temp->next!= NULL)
    {
        temp= temp->next;
    }
    temp->next= newnode;
    return head;
}
node *insertAtbtwn(node *head,int val,int index)
{
    int i=0;
    node *temp= head;
    node *newnode= (node *)malloc(sizeof(node));
    newnode->data= val;
    while(i!=(index-2))
    {
        temp= temp->next;
        i++;
    }
    newnode->next= temp->next;
    newnode->prev=temp; 
    temp->next= newnode;
    return head;
}
void search(node *head)
{
    int key=0,f=0;
    printf("Enter the number you want to find:\n");
    scanf("%d",&key);
    node *temp= head;
    while(temp!= NULL)
    {
        if(temp->data== key)
        {
            f=1;
            break;
        }
        temp= temp->next;
    }
    if(f==1)
    {
        printf("Number found");
    }
    else
    {
        printf("Number not found");
    }
}
node *createnode(node *head, int val)
{
   node *newnode= (node *)malloc(sizeof(node));
   newnode->data= val;
   newnode->prev= NULL;
   newnode->next= NULL;
   if(head == NULL)
   {
      return newnode;
   }
   node *temp = head;
   while(temp->next != NULL)
   {
      temp = temp->next;
   }
   newnode->prev = temp;
   temp->next = newnode;
   return head;
}
void main()
{
   node *head= NULL;
   int size=0,i=0,ele=0,n=0,pos=0,ch=0;
   char choice;
   printf("Enter how many node:\n");
   scanf("%d",&size);
   for(i=0;i<size;i++)
   {
      printf("Enter the data:\n");
      scanf("%d",&ele);
      head = createnode(head, ele);
   }
   printf("Printing the list:\n");
   traversal(head);
   printf("\nEnter 1 to merge the list, Enter 2 to insert elemnets in the list,Enter 3 to delete elemnets in the list,Enter 4 to search,Enter 5 to reverse");
    printf("Enter your choice:\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        {
            // printf("Enter how many nodes you need:\n");
            // scanf("%d",&num);
            // node *str;
            // printf("Enter the data in the list\n");
            // for(i=1;i<=num;i++)
            // {
            //     scanf("%d",&val);
            //     head2 = createnode(head2, val);
            // }
            // str= head2;
            // printf("Printing the second Linked List: \n");
            // traversal(head2);
            // printf("\nMerging the list\n");
            // node* lastNode = head;
            // while(lastNode->next != NULL)
            // {
            //     lastNode = lastNode->next;
            // }
           
            // lastNode->next = head2;
            // traversal(head);
            printf("Come tommorow\n");
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
                head= insertAtfirst(head,n);
                traversal(head);
            }
            else if(choice== 'B')
            {
                printf("Enter the value you want to enter:\n");
                scanf("%d",&n);
                printf("Enter the position you want to delete:\n");
                scanf("%d",&pos);
                head= insertAtbtwn(head,n,pos);
                traversal(head);
            }
            else if(choice== 'E')
            {
                printf("Enter the value you want to enter:\n");
                scanf("%d",&n);
                head= insertAtlast(head,n);
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
            printf("Enter F for deleting at front, B for deleting at between, enter E for deleting at end\n");
            printf("Enter your choice:\n");
            scanf(" %c",&choice);
            if(choice== 'F')
            {
               head= delete_first(head);
               traversal(head);
            }
            else if(choice== 'B')
            {
                printf("Enter the position you want to delete:\n");
                scanf("%d",&pos);
                //head= delete_btwn(head,pos);
                traversal(head);
            }
            else if(choice== 'E')
            {
                head= delete_end(head);
                traversal(head);
            }
            else
            {
                printf("Wrong Choice");
            }
        }
        break;
        case 4:
        {
            search(head);
        }
        break;
        case 5:
        {
            // node *x;
            // node *y;
            // x= head->next;
            // y= x->next;
            // head->next= NULL;
            // while(y!=NULL)
            // {
            //     x->next=NULL;
            //     x->next= head;
            //     head= x;
            //     x= y;
            //     y= x->next;
            // }
            // x->next= head;
            // head= x;
            // traversal(head);
        }
    }
    //free(temp);
    free(head);
}