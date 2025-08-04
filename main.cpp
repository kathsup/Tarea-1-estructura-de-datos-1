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
        std::cout<<"2. obtener el siguiente"<<std::endl;
        std::cout<<"3. ver el siguiente"<<std::endl;
        std::cout<<"4. imprimir lista"<<std::endl;
        std::cout<<"5. buscar un elemento"<<std::endl;
        std::cout<<"6. vaciar cola"<<std::endl;
        std::cout<<"7. salir"<<std::endl;
        std::cout << "Ingrese opcion: "<<std::endl;
        std::cin >> opcion;

        switch(opcion){

        case 1:{

            std::cout<<"Agregar a cola (enqueue)"<<std::endl;

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
            std::cout<<"obtener el siguiente (dequeue)"<<std::endl;

            if (!cola.isEmpty()) {
                ticket eliminado = cola.eliminarCola();
                std::cout << "Eliminado: " << eliminado.toString() << std::endl;
            } else {
                std::cout << "No hay tickets en la cola." << std::endl;
            }

            break;
        }
        case 3:{
            std::cout<<"ver el siguiente (peek)"<<std::endl;
            if(!cola.isEmpty()){
                ticket mostrar = cola.verSiguiente();
                std::cout<< "siguiente: "<<mostrar.toString()<<std::endl;
            }

            break;
        }
        case 4: {
            std::cout<<"imprimir lista"<<std::endl;
            cola.imprimirCola();
            break;
        }
        case 5: {
            std::string valor;
            std::cout<<"Buscar un elemento"<<std::endl;
            std::cout<<"Ingrese el ticket a buscar: ";
            std::cin>>valor;

            std::cout<<"valor buscado: "<<std::endl;
            cola.buscar(valor);
            break;
        }
        case 6:{
            std::cout<<"limpiar lista"<<std::endl;
            cola.limpiarLista();
            std::cout<<"Se ha limpiado la lista"<<std::endl;
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
