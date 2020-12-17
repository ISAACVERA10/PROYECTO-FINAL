
#ifndef PROYECTO_POO_PACIENTES_H
#define PROYECTO_POO_PACIENTES_H
#include "Personas.h"

class Pacientes: public Persona {
protected:
    TipoString enfermedad;
    bool enfermo;
public:
    Pacientes();
    Pacientes(const TipoString &_nombre, TipoEntero _edad,const TipoString &_fechanacimiento,const TipoString &_enfermedad,bool _enfermo);

    void mostrar_info();
    string get_nombre();

    ~Pacientes();
};


#endif //PROYECTO_POO_PACIENTES_H
