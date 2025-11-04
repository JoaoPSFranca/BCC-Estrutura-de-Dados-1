// Fila Dinamica
#include <stdio.h>
#include <stdlib.h>

typedef struct sNode {
    int data;
    struct sNode *next;
} Node;

void init(Node **front, Node **rear) { 
    *front = NULL;
    *rear = NULL; 
}

int isEmpty(Node *front) { return front == NULL; }

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

void enqueue(Node **front, Node **rear, int data) {
    Node *newNode = createNode(data);
    if (isEmpty(*front)) {
        *front = newNode;
        if (rear)
            *rear = newNode;
    } else {
        if (rear) {
            (*rear)->next = newNode;
            *rear = newNode;
        }
    }
}

int dequeue(Node **front, Node **rear, int *sucess) {
    if (isEmpty(*front)) {
        printf("Error: Queue is empty. \n");
        if (sucess) *sucess = 0;
        return 0;
    } else {
        Node *aux = *front;
        int data = aux->data;
        *front = (*front)->next;

        if (*front == NULL)
            *rear = NULL;

        free(aux);
        if (sucess) *sucess = 1;
        return data;
    }
}

void displayQueue(Node **front, Node **rear) {
    if (isEmpty(*front)) {
        printf("Queue is empty. \n");
    } else {
        Node *currentFront = *front;
        Node *currentRear = *rear;
        Node *bufferFront = NULL;
        Node *bufferRear = NULL;
        printf("Queue values:");

        while (!isEmpty(currentFront)) {
            int data = dequeue(&currentFront, &currentRear, NULL);
            enqueue(&bufferFront, &bufferRear, data);
            printf(" %d", data);
        }
        
        while (!isEmpty(bufferFront)) {
            int data = dequeue(&bufferFront, &bufferRear, NULL);
            enqueue(&currentFront, &currentRear, data);
        }
        
        *front = currentFront;
        *rear = currentRear;
        printf("\n");
    }
}

int menu() {
    int choice;
    printf("\n--- Queue Menu ---\n");
    printf("1. Enqueue\n");
    printf("2. Dequeue\n");
    printf("3. Display Queue\n");
    printf("0. Exit\n");
    printf("Choose an option: ");
    scanf("%d", &choice);
    return choice;
}

int main() {
    Node *front, *rear;
    init(&front, &rear);
    int option = -1, value, success;

    while (option != 0) {
        option = menu();
        switch (option) {
            case 0:
                printf("Exiting...\n");
                break;
            case 1:
                value = getValue();
                enqueue(&front, &rear, value);
                break;
            case 2:
                value = dequeue(&front, &rear, &success);
                if (success)
                    printf("Dequeued: %d\n", value);
                break;
            case 3:
                displayQueue(&front, &rear);
                break;
            default:
                printf("Invalid option. Please try again.\n");
        }
    } 

    return 0;
}
