#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

class SinglyLinkedList {
    Node* head;

public:

    SinglyLinkedList() {
        head = NULL;
    }

    // Insert at beginning
    void insertBeginning(int value) {
        Node* newNode = new Node(value);

        newNode->next = head;
        head = newNode;
    }

    // Insert at end
    void insertEnd(int value) {
        Node* newNode = new Node(value);

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

    // Insert at position
    void insertPosition(int value, int pos) {
        if (pos == 1) {
            insertBeginning(value);
            return;
        }

        Node* temp = head;

        for (int i = 1; i < pos - 1 && temp != NULL; i++) {
            temp = temp->next;
        }

        if (temp == NULL) {
            cout << "Invalid position\n";
            return;
        }

        Node* newNode = new Node(value);

        newNode->next = temp->next;
        temp->next = newNode;
    }

    // Delete from beginning
    void deleteBeginning() {
        if (head == NULL) {
            cout << "List is empty\n";
            return;
        }

        Node* temp = head;
        head = head->next;

        delete temp;
    }

    // Delete from end
    void deleteEnd() {
        if (head == NULL) {
            cout << "List is empty\n";
            return;
        }

        if (head->next == NULL) {
            delete head;
            head = NULL;
            return;
        }

        Node* temp = head;

        while (temp->next->next != NULL) {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;
    }

    // Delete from position
    void deletePosition(int pos) {
        if (head == NULL) {
            cout << "List is empty\n";
            return;
        }

        if (pos == 1) {
            deleteBeginning();
            return;
        }

        Node* temp = head;

        for (int i = 1; i < pos - 1 && temp != NULL; i++) {
            temp = temp->next;
        }

        if (temp == NULL || temp->next == NULL) {
            cout << "Invalid position\n";
            return;
        }

        Node* del = temp->next;
        temp->next = del->next;

        delete del;
    }

    // Search
    void search(int key) {
        Node* temp = head;
        int pos = 1;

        while (temp != NULL) {
            if (temp->data == key) {
                cout << "Found at position " << pos << endl;
                return;
            }

            temp = temp->next;
            pos++;
        }

        cout << "Not found\n";
    }

    // Display
    void display() {
        Node* temp = head;

        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL\n";
    }
};

int main() {

    SinglyLinkedList list;

    list.insertBeginning(20);
    list.insertBeginning(10);
    list.insertEnd(40);
    list.insertEnd(50);

    //list.insertPosition(30, 3);

    list.display();

    // list.search(30);

    // list.deleteBeginning();
    // list.deleteEnd();
    // list.deletePosition(2);

    // list.display();

    return 0;
}