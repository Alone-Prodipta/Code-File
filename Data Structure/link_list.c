#include<stdio.h>
#include<stdlib.h>
#define size 5;
struct node 
{
    int data;
    struct node* next;
};
void traversalPointer(struct node *pt);
void traversalPointer(struct node *pt)
{
    while(pt!= NULL)
    {
        printf("Element: %d\n",pt->data);
        pt= pt->next;
    }
}

void main()
{
    struct node* head;
    struct node* secd;
    struct node* thrd;
    struct node* frth;

    //allocated in the heap as  the memory is dynamically allocated
    head= (struct node *)malloc(sizeof(struct node));
    secd= (struct node *)malloc(sizeof(struct node));
    thrd= (struct node *)malloc(sizeof(struct node));
    frth= (struct node *)malloc(sizeof(struct node));

    //linking head with the second node
    
    head->data= 45;
    head->next= secd;

    //linking second with the third node
    
    secd->data= 68;
    secd->next= thrd;

    //linking third with the fourth node
    
    thrd->data= 53;
    thrd->next= frth;

    //linking fourth with the NULL
    
    frth->data= 76;
    frth->next= NULL;

    //Printing the linked list
    traversalPointer(head);

    //free memory

    free(head);
    free(secd);
    free(thrd);
    free(frth);
    
}