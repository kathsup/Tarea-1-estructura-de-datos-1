#include <iostream>
#include "ticket.h"
#include "queue.h"
#include<ctime>


int main(){

    int opcion = 0;
    int contador = 1;
    Queue<ticket> cola;

    do{
        std::cout<<"-----Menu-----\n";
        std::cout<<"1. agregar a la cola"<<std::endl;
        std::cout << "Ingrese opcion: "<<std::endl;
        std::cin >> opcion;

        switch(opcion){

        case 1:{

            std::cout<<"Agregar a cola"<<std::endl;

            ticket nuevo("","");

            std::string codigo = "A"+std::to_string(contador);
            std::time_t date = std::time(nullptr);
            std::string fecha = std::ctime(&date);

            //ticket nuevo(codigo, fecha);
            nuevo.setCodigo(codigo);
            nuevo.setFecha(fecha);
            cola.agregarCola(nuevo);

            std::cout << "Ticket agregado: " << codigo << " con fecha " << fecha << std::endl;
            contador++;

            break;}
        case 2:{
            break;
        }
        case 7:{
            std::cout<<"saliendo...";
            break;
        }
        default:
            std::cout<<"opcion invalida";
            break;
        }



    }while(opcion!=7);




    return 0;
}
