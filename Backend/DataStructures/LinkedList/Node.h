//
// Created by fynde on 11/3/2026.
//

#ifndef BACKEND_NODE_H
#define BACKEND_NODE_H
#include <string>

template <typename T>
class Node{
private:
    Node* next;
    Node* previous;
    T content;

public:
    Node(Node* previous, Node* next, T content);
    std::string GetType();
    T GetContent();
    void ChangeContent(T content);
    void AddPrevious(Node* previous);
    void AddNext(Node* next);
    void Print();
};


#endif //BACKEND_NODE_H
