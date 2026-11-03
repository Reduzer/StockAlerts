//
// Created by fynde on 11/3/2026.
//

#include "Node.h"
#include <typeinfo>
#include <string>

template <typename T>
Node<T>::Node(Node* previous, Node* next, T content){

}

template <typename T>
std::string Node<T>::GetType(){
    std::string str = typeid(this->content).name();
    return str;
}