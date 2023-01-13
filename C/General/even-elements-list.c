#include <stdio.h>
#include <stdlib.h>

struct Node {
    int value;
    struct Node* next;
};

struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->value = value;
    newNode->next = NULL;

    return newNode;
}

void displayEvenValues(struct Node* head) {
    printf("\nEven elements: ");
    struct Node* current = head;
    while (current != NULL) {
        if (current->value % 2 == 0) {
            printf("%d ", current->value);
        }
        current = current->next;
    }
}

void freeList(struct Node* head) {
    while (head != NULL) {
        struct Node* temp = head;
        head = head->next;
        free(temp);
    }
}

int main()
{
    struct Node* node1 = createNode(4);

    struct Node* node2 = createNode(15);
    node1->next = node2;

    struct Node* node3 = createNode(18);
    node2->next = node3;

    struct Node* node4 = createNode(71);
    node3->next = node4;

    struct Node* node5 = createNode(72);
    node4->next = node5;

    struct Node* current = node1;
    printf("Current list: ");
    while (current != NULL) {
        printf("%d ", current->value);
        current = current->next;
    }

    displayEvenValues(node1);

    freeList(node1);
}
