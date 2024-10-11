#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 10

// Define the stack structure
struct Stack {
    int items[MAX_SIZE];
    int top;
};

// Initialize the stack
void initializeStack(struct Stack *s) {
    s->top = -1;
}

// Check if the stack is full
bool isFull(struct Stack *s) {
    return s->top == MAX_SIZE - 1;
}

// Check if the stack is empty
bool isEmpty(struct Stack *s) {
    return s->top == -1;
}

// Push an element onto the stack
void push(struct Stack *s, int value) {
    if (isFull(s)) {
        printf("Stack Overflow\n");
    } else {
        s->top++;
        s->items[s->top] = value;
        printf("Pushed %d onto the stack\n", value);
    }
}

// Pop an element from the stack
int pop(struct Stack *s) {
    if (isEmpty(s)) {
        printf("Stack Underflow\n");
        return -1;
    } else {
        int popped = s->items[s->top];
        s->top--;
        return popped;
    }
}

// Display the stack elements
void display(struct Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements: ");
        for (int i = 0; i <= s->top; i++) {
            printf("%d ", s->items[i]);
        }
        printf("\n");
    }
}

int main() {
    struct Stack stack;
    initializeStack(&stack);

    push(&stack, 1);
    push(&stack, 2);
    push(&stack, 3);
    push(&stack, 4);
    push(&stack, 5);

    display(&stack);

    printf("Popped %d from the stack\n", pop(&stack));

    display(&stack);

    return 0;
}