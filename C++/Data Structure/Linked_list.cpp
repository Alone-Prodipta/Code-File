<<<<<<< HEAD
#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
    node(int val)
    {
        data= val;
        next= NULL;
    }
};
class list
{
    node *head;
    node *tail;
    public:
    list()
    {
        head= NULL;
        tail= NULL;
    }
    void insert_first(int val)
    {
        node *newnode= new node(val);   //creates a node of type 'node'
        if(head== NULL)
        {
           head= newnode;
           tail= newnode; 

        }
        else
        {
            tail->next= newnode;
            tail= newnode;
        }
    }
    void traversal()
    {
        node *temp= head;
        while(temp!= NULL)
        {
            cout<<temp->data;
            if(temp->next!= NULL)
            {
                cout<<" -> ";
            }
            temp= temp->next;
        }
    }
};


int main()
{
    node *head= NULL;
    list ll;
    int i=0,ele=0,size=0;
    cout<<"Enter the size of the list\n";
    cin>>size;
    for(i=0;i<size;i++)
    {
        cout<<"Enter the data\n";
        cin>>ele;
        ll.insert_first(ele);
    }
    cout<<"Printing the list\n";
    ll.traversal();
    return 0;
=======
#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
    node(int val)
    {
        data= val;
        next= NULL;
    }
};
class list
{
    node *head;
    node *tail;
    public:
    list()
    {
        head= NULL;
        tail= NULL;
    }
    void insert_first(int val)
    {
        node *newnode= new node(val);   //creates a node of type 'node'
        if(head== NULL)
        {
           head= newnode;
           tail= newnode; 

        }
        else
        {
            tail->next= newnode;
            tail= newnode;
        }
    }
    void traversal()
    {
        node *temp= head;
        while(temp!= NULL)
        {
            cout<<temp->data;
            if(temp->next!= NULL)
            {
                cout<<" -> ";
            }
            temp= temp->next;
        }
    }
};


int main()
{
    node *head= NULL;
    list ll;
    int i=0,ele=0,size=0;
    cout<<"Enter the size of the list\n";
    cin>>size;
    for(i=0;i<size;i++)
    {
        cout<<"Enter the data\n";
        cin>>ele;
        ll.insert_first(ele);
    }
    cout<<"Printing the list\n";
    ll.traversal();
    return 0;
}