#include "datastructers.h"
#include <iostream>
int main() {
    DataStructure ds;
    Node* head = NULL;
    head = ds.add_begin(head, 10);
    head = ds.add_begin(head, 20);
    head = ds.add_begin(head, 30);
    ds.add_position(head,99,2);
    ds.add_end(head,98);
    head=ds.Delete(1,head);
    ds.Display(head);

    return 0;
}

