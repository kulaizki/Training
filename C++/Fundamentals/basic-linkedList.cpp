#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next; // no need for "struct" keyword in C++
};
Node* head;

void insert(Node** head, int x) {
    Node* newNode = new Node;
    newNode->data = x;
    newNode->next = NULL;
    if (*head != NULL) newNode->next = *head;
    *head = newNode;
}

void display(Node* head) {
    while (head != NULL) {
        cout << head->data << ' ';
        head = head->next;
    }
    cout << '\n';
}

void freeList(Node* head) {
    while (head != NULL) {
        Node* temp = head;
        head = head->next;
        delete temp; // for deallocating memory allocated by "new"
    }
}

int main()
{
    Node* head = NULL;

    insert(&head, 1);
    insert(&head, 2);
    insert(&head, 3);

    display(head);

    freeList(head);
}
