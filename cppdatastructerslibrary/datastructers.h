#ifndef DATASTRUCTURES_H
#define DATASTRUCTURES_H

//define struct for linked list
struct Node {
    int data;
    struct Node* link;
};

class DataStructure {
public:
    //these are functions that add data in different position
    Node* add_begin(struct Node* head, int data);
    Node* add_end(struct Node* head, int data);
    Node* add_position(struct Node* head, int data, int position);
    Node* Delete(int position, struct Node* head);
    //this is a display function to show data in linked list
    void Display(struct Node* head);
};

#endif // DATASTRUCTURES_H
