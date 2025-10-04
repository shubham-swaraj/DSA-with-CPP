#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Insertion functions
void insertAtBeginning(Node* &head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

void insertAtEnd(Node* &head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertAfter(Node* prevNode, int value) {
    if (prevNode == NULL) {
        cout << "Previous node cannot be NULL!" << endl;
        return;
    }

    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = prevNode->next;
    prevNode->next = newNode;
}

// Traversal
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = NULL;  // start with empty list

    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);

    cout << "Initial list: ";
    printList(head);

    insertAtBeginning(head, 5);
    cout << "After inserting 5 at beginning: ";
    printList(head);

    insertAfter(head->next, 15); // insert after node with 10
    cout << "After inserting 15 after 10: ";
    printList(head);

    return 0;
}
