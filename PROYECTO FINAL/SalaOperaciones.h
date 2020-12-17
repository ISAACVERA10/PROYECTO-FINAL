
#ifndef PROYECTO_POO_SALAOPERACIONES_H
#define PROYECTO_POO_SALAOPERACIONES_H

#include "Cuartos.h"

class SalaOperaciones: public Cuarto{
protected:
    vector<string> encargados;
public:
    SalaOperaciones();
    SalaOperaciones(TipoEntero _numId, TipoEntero _aforo,const vector<string> &_encargados);

    void Mostrar();

    void set_aforo(int num);

    ~SalaOperaciones();

};

#endif //PROYECTO_POO_SALAOPERACIONES_H
