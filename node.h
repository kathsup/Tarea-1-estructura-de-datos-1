#ifndef NODE_H
#define NODE_H

template<typename T>

class Node{
public:
    T dato;
    Node<T>* siguiente;

    Node(const T& info){
        dato = info;
        siguiente = nullptr;
    }
};

#endif
