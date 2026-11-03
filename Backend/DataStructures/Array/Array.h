//
// Created by fynde on 11/3/2026.
//

#ifndef BACKEND_ARRAY_H
#define BACKEND_ARRAY_H


template <typename T>
class Array{
private:
    T* ptr;
    int size;

public:
    Array(T arr[], int size);
    T GetAt(int index);
    T GetFirst();
    T GetLast();
    void InsertAt(T element, int position);
    void MassAppend(T elements[], int size);
    void DeleteAt(int position);
    void DeleteElement(T element);
    void Print();
};


#endif //BACKEND_ARRAY_H
