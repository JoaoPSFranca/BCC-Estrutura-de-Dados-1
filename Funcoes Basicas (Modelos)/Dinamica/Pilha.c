// Pilha Dinamica
#include <stdio.h>
#include <stdlib.h>

typedef struct sNode {
    int data;
    struct sNode *next;
} Node;

void init(Node **top) { *top = NULL; }

int isEmpty(Node *top) { return top == NULL; }

int getValue() {
    int value;
    printf("Insert a value: ");
    scanf("%d", &value);
    return value;
}

Node *createNode(int data) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void push(Node **top, int data) {
    Node *newNode = createNode(data);
    newNode->next = *top;
    *top = newNode;
}

int pop(Node **top, int *sucess) {
    if (isEmpty(*top)) {
        printf("Error: Stack is empty. \n");
        if (sucess) *sucess = 0;
        return 0;
    } else {
        Node *aux = *top;
        *top = (*top)->next;
        int data = aux->data;
        free(aux);
        if (sucess) *sucess = 1;
        return data;
    }
}

void displayStack(Node **top) {
    if (isEmpty(*top)) {
        printf("Stack is empty. \n");
    } else {
        Node *aux = *top;
        Node *buffer = NULL;
        printf("Stack values:");

        while (!isEmpty(aux)) {
            int data = pop(&aux, NULL);
            push(&buffer, data);
            printf(" %d", data);
        }

        while (!isEmpty(buffer))
            push(&aux, pop(&buffer, NULL));
        
        *top = aux;
        printf("\n");
    }
}

int menu() {
    int opt;

    printf("\nChoose an option:\n");
    printf("1. Push element\n");
    printf("2. Pop element\n");
    printf("3. Display elements\n");
    printf("0. Exit\n\n");

    printf("Option: ");
    scanf("%d", &opt);

    return opt;
}

int main() {
    Node *stack;
    int opt = -1;

    init(&stack);

    while (opt != 0) {
        opt = menu();

        switch (opt) {
            case 0:
                break;

            case 1:
                push(&stack, getValue());
                break;

            case 2:
                int sucess;
                int data = pop(&stack, &sucess);
                if (sucess)
                    printf("Popped value: %d\n", data);
                break;

            case 3:
                displayStack(&stack);
                break;

            default:
                printf("Error: invalid option!\n");
                break;
        }
    }

    return 0;
}
