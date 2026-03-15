#include <stdlib.h>
#include <stdio.h>

typedef struct {
    int top;
    int *arr;
    int size;
} stack;

int isfull(stack *st) {
    return st->top == st->size - 1;
}

int isempty(stack *st) {
    return st->top == -1;
}

int main() {
    stack *s = (stack *)malloc(sizeof(stack));
    s->size = 100;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    int size = 0, i = 0, *pr, item = 0;
    printf("Enter the size of the stack:\n");
    scanf("%d", &size);

    pr = (int *)malloc(size * sizeof(int));

    for(i = 0; i < size; i++) {
        printf("Enter the data:\n");
        scanf("%d", &pr[i]);
        item = pr[i];
        s->arr[++s->top] = item;   // FIXED: push into stack
    }

    if(isfull(s)) {
        printf("Stack is full\n");
    } else {
        printf("Stack is not full\n");
    }

    printf("Display\n");
    for(i = s->top; i >= 0; i--) {   // FIXED: display from stack
        printf("%d ", s->arr[i]);
    }
    printf("\n");

    printf("POPing the elements\n");
    item = s->arr[s->top--];   // FIXED: pop from stack
    printf("Popped: %d\n", item);

    if(isempty(s)) {
        printf("Stack is empty\n");
    } else {
        printf("Stack is not empty\n");
    }

    free(pr);
    free(s->arr);
    free(s);
    return 0;
}