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









