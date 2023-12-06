#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    char data;
    struct Node* next;
};

struct Stack {
    struct Node* top;
};

struct Stack* createStack() {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    if (!stack) {
        printf("Memory allocation error!\n");
        exit(EXIT_FAILURE);
    }
    stack->top = NULL;
    return stack;
}

void push(struct Stack* stack, char x) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Stack Overflow!\n");
        exit(EXIT_FAILURE);
    }
    newNode->data = x;
    newNode->next = stack->top;
    stack->top = newNode;
}

char pop(struct Stack* stack) {

    if (stack->top == NULL) {
        printf("Stack Underflow!\n");
        exit(EXIT_FAILURE);
    }
    char x = stack->top->data;
    struct Node* temp = stack->top;
    stack->top = stack->top->next;
    free(temp);
    return x;
}

int isEmpty(struct Stack* stack) {
    return (stack->top == NULL);
}

char stackTop(struct Stack* stack) {
    if (isEmpty(stack)) {
        return -1;
    }
    return stack->top->data;
}

int isBalanced(char* exp) {
    struct Stack* stack = createStack();

    for (int i = 0; i < strlen(exp); i++) {
        if (exp[i] == '(') {
            push(stack, exp[i]);
        } else if (exp[i] == ')') {
            if (isEmpty(stack)) {
                return 0;
            } else {
                pop(stack);
            }
        }
    }
    return isEmpty(stack) ? 1 : 0;
}

int main() {
    char E[] = "((a+b)*(c-d))";
    printf("%d\n", isBalanced(E));

    char F[] = "((a+b)*(c-d)))";
    printf("%d\n", isBalanced(F));

    char G[] = "(((a+b)*(c-d))";
    printf("%d\n", isBalanced(G));

    return 0;
}
