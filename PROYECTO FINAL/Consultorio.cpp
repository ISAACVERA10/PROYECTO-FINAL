#include "Consultorio.h"

Consultorio::Consultorio() {};

Consultorio::Consultorio(TipoEntero _num_id, TipoEntero _aforo, const TipoString &_encargado) {
    num_id = _num_id;
    aforo = _aforo;
    encargado = _encargado;
}

void Consultorio::Mostrar() {
    cout<<"Doctor: "<<encargado<<endl;
    Cuarto::Mostrar();
}


Consultorio::~Consultorio() {};
