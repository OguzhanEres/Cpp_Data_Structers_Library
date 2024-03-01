#include "datastructers.h"
#include <iostream>
using namespace std;

Node* DataStructure::add_begin(struct Node *head, int data) {
    struct Node* newNode = new Node();
    newNode->data = data;
    newNode->link = head;
    head = newNode;
    return head;
}

Node* DataStructure::add_end(struct Node *head, int data) {
    // If the list is empty
    if (head == nullptr) {
        head = new Node();
        // Set data
        head->data = data;
        // Set link as null
        head->link = nullptr;
        return head;
    }
    // Traverse till the end of the list
    struct Node* temp = head;
    while (temp->link != nullptr) {
        temp = temp->link;
    }
    temp->link = new Node();
    // Set data
    temp->link->data = data;
    // Set link as null
    temp->link->link = nullptr;
    return head;
}

Node* DataStructure::add_position(struct Node *head, int data, int position) {
    // If position is invalid
    if (position < 1)
        return head;
    // If position is at the beginning
    if (position == 1) {
        // Call add_begin function
        return add_begin(head, data);
    }

    // Traverse to the position
    struct Node* temp = head;
    for (int i = 0; i < position - 2 && temp != nullptr; ++i) {
        temp = temp->link;
    }
    // If position is invalid
    if (temp == nullptr) return head;
    struct Node* newNode = new Node();
    // Set data
    newNode->data = data;
    // Set link to next node
    newNode->link = temp->link;
    // Set link of previous node to new node
    temp->link = newNode;
    return head;
}

Node* DataStructure::Delete(int position, struct Node *head) {
    if (head == nullptr)
        return nullptr;
    struct Node* temp = head;
    // If position is at the beginning
    if (position == 1) {
        head = temp->link;
        // Delete the current node
        delete temp;
        return head;
    }
    // Traverse to the position
    for (int i = 0; temp != nullptr && i < position - 2; ++i) {
        temp = temp->link;
    }
    // If position is invalid
    if (temp == nullptr || temp->link == nullptr)
        return head;
    struct Node* temp2 = temp->link;
    // Skip the node to be deleted
    temp->link = temp2->link;
    delete temp2;
    return head;
}

void DataStructure::Display(struct Node *head) {
    // Temporary pointer to traverse the list
    struct Node* temp = head;
    // Traverse the list and print data
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->link;
    }
    cout << endl;
}
