#ifndef QUEUE_H
#define QUEUE_H
#include"node.h"

template<typename T>
class Queue {
private:
    Node<T>* inicio;
    Node<T>* final;
    int size;

public:
    Queue(){
        inicio = nullptr;
        final = nullptr;
        size = 0;
    };

    bool isEmpty(){
        return size == 0;

    }

    void agregarCola(const T& dato){
        //crear objeto
        Node<T> *nuevo = new Node<T>(dato);
        nuevo->siguiente = nullptr;

        //primer caso si la cola esta vacia
        if (isEmpty()){
            inicio = nuevo;
            final = nuevo;
            size++;
        }else{
            //segundo caso agregar al final
            final->siguiente = nuevo;
            final = nuevo;
            size ++;
        }

    }
};

#endif
