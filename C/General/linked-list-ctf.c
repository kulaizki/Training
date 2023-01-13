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

void freeList(struct Node* head) {
    while (head != NULL) {
        // use a pointer to store the current head, so the head
        // can be updated to the next node before freeing
        // the current node
        struct Node* temp = head;
        head = head->next;
        free(temp);
    }
}

int main()
{
    struct Node* node1 = createNode(2);

    struct Node* node2 = createNode(12);
    node1->next = node2;

    struct Node* node3 = createNode(15);
    node2->next = node3;

    struct Node* node4 = createNode(18);
    node3->next = node4;

    struct Node* current = node1;
    while (current != NULL) {
        printf("Memory: %p | Value: %d\n", current, current->value);
        current = current->next;
    }

    freeList(node1);

    return 0;
}
