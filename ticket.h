#ifndef TICKET_H
#define TICKET_H


#include <string>

class ticket{
public:

    std::string fecha, codigo;

    ticket() {
        codigo = "";
        fecha = "";
    }

    ticket(std::string c, std::string f){
        codigo = c;
        fecha = f;
    }



    void setFecha(std::string f){
        fecha = f;
    };

    void setCodigo(std::string c){
        codigo = c;
    };

};

#endif // TICKET_H
