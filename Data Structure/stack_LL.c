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
        printf("|_%d_|\n", temp->data);
        temp= temp->next;
    }
}
node* POP(node* pt)
{
    if(pt == NULL)
        return NULL;
    if(pt->next == NULL)
    {
        free(pt);
        return NULL;
    }
    node* trav = pt;
    while(trav->next->next != NULL)
    {
        trav = trav->next;
    }
    node* temp = trav->next;
    trav->next = NULL;
    free(temp);
    traversal(pt);
}
node* createnode(node* head, int data) 
{
    node* ptr = (node*)malloc(sizeof(node));
    ptr->data = data;
    ptr->next = NULL;
    if (head == NULL)
    {
        return ptr;  
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
    int ch,i=0,size=0,data=0;
    char option;
    printf("Enter the size of the stack\n");
    scanf("%d",&size);
    node *head= NULL;
    printf("Enter 1 to Push,2 to POP, 3 to display\n");
    printf("Enter your choice:\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        {
            printf("Enter the elements in the array\n");
            for(i=1;i<=size;i++)
            {
                scanf("%d",&data);
                head= createnode(head, data);
            }
            printf("Do you want to display:\n");
            scanf(" %c",&option);
            if(option =='Y'||option=='y')
            {
                goto display;
            }
            else
            {
                return;
            }
        }
        break;
        case 2:
        {
            POP:printf("POPing the elemnts from the stack\n");
            POP(head);
            printf("Do you want to display:\n");
            scanf(" %c",&option);
            if(option =='Y'||option=='y')
            {
                goto display;
            }
            else
            {
                return;
            }
        }
        break;
        case 3:
        {
            display:printf("Displaying the stack\n");
            traversal(head);
            printf("Do you want to POP:\n");
            scanf(" %c",&option);
            if(option =='Y'||option=='y')
            {
                goto POP;
            }
            else
            {
                return;
            }
        }
        default:
        {
            printf("Wrong choice");
        }
    }

}