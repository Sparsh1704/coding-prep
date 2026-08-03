#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *next;
    
};

typedef struct node Node;

Node *head = NULL;

Node *createnode(int data){
    Node *p = (Node*)malloc(sizeof(Node));

    if (p == NULL) {
        cout << "Memory allocation failed!" << endl;
        return NULL;
    }
    p->data = data;
    p->next = NULL;
    return p;
}

void insert(int data) {
    Node *nd = createnode(data);

    if (head == NULL) {
        head = nd;
        return;
    }

    Node *temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = nd;
}
void delet(int key) {
    // List is empty
    if (head == NULL) {
        cout << "List is empty." << endl;
        return;
    }

    Node *temp = head;
    Node *prev = NULL;

    // If the node to delete is the head node
    if (head->data == key) {
        head = head->next;
        free(temp);
        cout << "Node deleted successfully." << endl;
        return;
    }

    // Search for the node
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    // Node not found
    if (temp == NULL) {
        cout << "Node not found." << endl;
        return;
    }

    // Delete the node
    prev->next = temp->next;
    free(temp);

    cout << "Node deleted successfully." << endl;
}
void printList() {
    if (head == NULL) {
        cout << "List is empty." << endl;
        return;
    }

    Node *temp = head;

    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}
int main() {
    insert(10);
    insert(20);
    insert(30);
    insert(40);

    cout << "Original List: ";
    printList();

    delet(20);

    cout << "After Deletion: ";
    printList();

    return 0;
}