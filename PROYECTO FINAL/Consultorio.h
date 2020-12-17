

#ifndef PROYECTO_POO_CONSULTORIO_H
#define PROYECTO_POO_CONSULTORIO_H

#include "Cuartos.h"

class Consultorio: public Cuarto{
protected:
    TipoString encargado;
    TipoString citas;
public:
    Consultorio();
    Consultorio(TipoEntero _num_id,TipoEntero _aforo,const TipoString &_encargado);

    void Mostrar();

    ~Consultorio();

};


#endif //PROYECTO_POO_CONSULTORIO_H
