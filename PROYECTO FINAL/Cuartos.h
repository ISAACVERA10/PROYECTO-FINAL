
#ifndef PROYECTO_POO_CUARTOS_H
#define PROYECTO_POO_CUARTOS_H

#include "tipos.h"

class Cuarto{
protected:
    TipoEntero num_id;
    TipoEntero aforo;
    bool lleno=false;
public:
    Cuarto();
    Cuarto(TipoEntero _num_id,TipoEntero _aforo);

    virtual void Mostrar();

    ~Cuarto();

};

#endif //PROYECTO_POO_CUARTOS_H
