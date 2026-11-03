//
// Created by fynde on 11/3/2026.
//

#ifndef BACKEND_LINKEDLIST_H
#define BACKEND_LINKEDLIST_H

class Node;

class LinkedList{
private:
    Node* root;
    int size;

public:
    LinkedList(Node* root, int size);
    Node* GetAt(int index);
    Node* GetFirst();
    Node* GetLast();
    void InsertAt(Node* element, int position);
    void MassAppend(Node* elements, int size);
    void DeleteAt(int position);
    void DeleteElement(Node* element);
    void Print();
};


#endif //BACKEND_LINKEDLIST_H
