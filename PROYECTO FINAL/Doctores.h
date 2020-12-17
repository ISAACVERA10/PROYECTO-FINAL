//
// Created by sayoj on 16/12/2020.
//

#ifndef PROYECTO_POO_DOCTORES_H
#define PROYECTO_POO_DOCTORES_H

#include "Personas.h"

class Doctores: public Persona {
protected:
    TipoString area;
    TipoString universidad;
    TipoEntero anhos;
public:
    Doctores();

    Doctores(const TipoString &_nombre, TipoEntero _edad, const TipoString &_fechanacimiento,const TipoString &_area,
             const TipoString &_uni, TipoEntero _anhos);

    void mostrar_info();

    TipoString get_nombre();

    ~Doctores();
};
#endif //PROYECTO_POO_DOCTORES_H
