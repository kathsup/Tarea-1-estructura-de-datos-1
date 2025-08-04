#ifndef QUEUE_H
#define QUEUE_H
#include"node.h"
#include <iostream>

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


    T eliminarCola(){
        //revisar si esta vacia
        if (isEmpty()) {
             throw std::out_of_range("La cola está vacía");
        }

        T dato = inicio->dato;
        Node<T> *aux = inicio;

        //mostrar el dato a eliminar
        //std::cout << "Eliminando a: " << dato << std::endl;

        if(inicio==final){
            //si solo hay uno en la fila
            inicio = nullptr;
            final = nullptr;
        }else{
            //si hay más de uno en la fila
            inicio=inicio->siguiente;
        }
        delete aux;
        size--;

        return dato;
    }

    T verSiguiente(){
        //ver si esta vacia
        if (isEmpty()) {
            throw std::out_of_range("La cola está vacía");
        }

        return inicio->dato;

    }


    void imprimirCola(){
        //primer caso: ver si esta vacio
        if (isEmpty()) {
        std::cout << "\nQueue esta vacio." << std::endl;
        return;
        }
        //caso dos: imprimir todo
        else{
            Node<T> *aux = inicio;
            while(aux!=nullptr){
                std::cout<<aux->dato.toString()<< std::endl;
                aux = aux->siguiente;

            }
        }

    }

    void buscar(std::string cod){
        Node<T> *aux = inicio;
        bool encontrado = false;

        while(aux!=nullptr){

            if(aux->dato.getCodigo() == cod){
                std::cout<<aux->dato.toString()<<std::endl;
                encontrado = true;
                break;
                return true;
            }
            aux = aux->siguiente;


    }
        if (!encontrado) {
            std::cout << "No se encontro el ticket: " << cod << std::endl;
        }

    }


    void limpiarLista(){
        Node<T> *aux = inicio;
        Node<T> *tmp;
        while(aux != nullptr){
            tmp= aux->siguiente;
            delete aux;
            aux = tmp;
        }

        inicio = nullptr;
        final = nullptr;
        size = 0;

    }







};

#endif
