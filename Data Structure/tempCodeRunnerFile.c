#include<stdio.h>
#include<stdlib.h>
int i=0;
typedef struct xy
{
    int data;
    struct xy *next; 
}node;
node *temp,*p;
void input_node()
{
    node *head;
    int ele=0;
    i=1;
    printf("Enter the elements in the node");
    scanf("%d",&ele);
    temp=(int *)malloc(sizeof(int));
    temp->data=ele;
    temp->next=NULL;
    p=temp;
}
void main()
{
    int n=0;
    i=2;
    node *pt=(node *)malloc(sizeof(node));
    input_node();
    printf("Enter the total number of nodes");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        node *head;
        int ele=0;
        i=1;
        printf("Enter the elements in the node");
        scanf("%d",&ele);
        temp=(int *)malloc(sizeof(int));
        temp->data=ele;
        temp->next=NULL;
        p->next= temp;
        p= p->next;
    }
    

}