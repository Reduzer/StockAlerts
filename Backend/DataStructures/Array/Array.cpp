//
// Created by fynde on 11/3/2026.
//

#include "Array.h"
#include <iostream>

template <typename T>
Array<T>::Array(T arr[], int size){
    ptr = new T[size];
    this->size = size;
    for(int i = 0; i < size; i++){
        ptr[i] = arr[i];
    }
}

template <typename T>
T Array<T>::GetAt(int index){
    if(index > size){
        return ptr[size-1];
    } else if(index < 0){
        return ptr[0];
    } else {
        return ptr[index];
    }
}

template <typename T>
T Array<T>::GetFirst(){
    return ptr[0];
}

template <typename T>
T Array<T>::GetLast(){
    return ptr[size-1];
}

template <typename T>
void Array<T>::InsertAt(T element, int position){
    ++size;
    T copy[size];
    for(int i = 0; i < size; i++){
        if(i == position){
            copy[i] = element;
            copy[i+1] = ptr[i];
            i += 2;
        } else {
            copy[i] = ptr[i];
        }
    }
}

template <typename T>
void Array<T>::MassAppend(T elements[], int size){
    this->size += size;
    T copy[this->size];

    for(int i = 0; i < this->size-size; i++){
        copy[i] = ptr[i];
    }

    for(int i = this->size-size; i < this->size; i++){
        copy[i] = elements[i];
    }

    this.ptr = copy;
}

template <typename T>
void Array<T>::DeleteAt(int position){
    T copy[this->size-1];

    for(int i = 0; i < size; i++){
        if(i == position){
            continue;
        } else {
            copy[i] = ptr[i];
        }
    }

    this.ptr = copy;
}

template <typename T>
void Array<T>::DeleteElement(T element){
    T copy[this.size-1];

    for(int i = 0; i < this.size; i++){
        if(ptr[i] == element){
            continue;
        } else {
            copy[i] = ptr[i];
        }
    }

    this->ptr = copy;
}

template <typename T>
void Array<T>::Print(){
    for(int i = 0; i < this->size; i++){
        std::cout << ptr[i] << std::endl;
    }
}