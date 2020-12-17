

#ifndef PROYECTO_POO_PERSONAS_H
#define PROYECTO_POO_PERSONAS_H
#include <iostream>
#include "tipos.h"
#include <fstream>

class Persona{
protected:
    TipoString nombre;
    TipoEntero edad;
    TipoString fechanacimiento;
public:
    Persona();
    Persona(const TipoString &_nombre,TipoEntero _edad,const TipoString &_fechanacimiento);

    virtual void mostrar_info();

    virtual ~Persona();
};
#endif //PROYECTO_POO_PERSONAS_H
