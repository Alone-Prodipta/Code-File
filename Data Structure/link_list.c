/*#include<stdio.h>
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
    struct node* head;
    struct node* temp= head;
    while(temp!= NULL)
    {
         printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}


int main()
{
    int num=0,i=0;
    // struct node* head= NULL;
    // struct node* tail= NULL;
    // struct node* temp= NULL;
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

    // free(head);
    // free(secd);
    // free(thrd);
    // free(frth);
    
    printf("Enter the number of nodes:\n");
    scanf("%d",&num);
    printf("Enter the elements in each node:\n");
    for(i=0;i<num;i++)
    {
        temp=(struct node*)malloc(sizeof(struct node));
        if(temp== NULL)
        {
            printf("Memory can not be allocated");
            return 1;
        }
        scanf("%d",&temp->data);
        temp->next= NULL;

        if(head== NULL)
        {
            temp= head;
            tail= head;
        }
        else
        {
            temp= tail->next;
            tail= temp;
        }
    }
    temp= head;
    while(temp!= NULL)
    {
        struct node* nextNode=temp->next; 
        printf("%d",temp->data);
        free(temp);
        temp= temp->next;
    }
    printf("NULL");
    return 0;
}
*/













#include <stdio.h>
#include <stdlib.h>

// Define node structure
struct node {
    int data;
    struct node* next;
};

// Function to traverse and print the list
void traversalPointer(struct node* head) {
    struct node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct node* head = NULL;
    struct node* temp = NULL;
    struct node* tail = NULL;

    int n, i;
    printf("Enter number of nodes: ");
    scanf("%d", &n);

    // Create nodes using a loop
    for (i = 0; i < n; i++) {
        temp = (struct node*)malloc(sizeof(struct node));
        if (temp == NULL) {
            printf("Memory allocation failed\n");
            return 1;
        }

        // Assign data (example: multiples of 10)
        scanf("%d",temp->data);
        temp->next = NULL;

        if (head == NULL) {
            head = temp;   // first node
            tail = temp;
        } else {
            tail->next = temp;  // link new node
            tail = temp;        // move tail forward
        }
    }

    // Print linked list
    traversalPointer(head);

    // Free memory
    temp = head;
    while (temp != NULL) {
        struct node* nextNode = temp->next;
        free(temp);
        temp = nextNode;
    }

    return 0;
}








