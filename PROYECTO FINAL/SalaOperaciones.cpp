#include "SalaOperaciones.h"

SalaOperaciones::SalaOperaciones() {}

SalaOperaciones::SalaOperaciones(TipoEntero _numId, TipoEntero _aforo, const vector<string> &_encargados) {
    num_id = _numId;
    aforo = _aforo;
    encargados = _encargados;
}

void SalaOperaciones::Mostrar() {
    cout<<"Encargados: ";
    for(int i = 0 ; i < encargados.size();i++){
        cout<<encargados[i]<<endl;
    }
    Cuarto::Mostrar();
}

void SalaOperaciones::set_aforo(int num) {
    aforo=num;
}

SalaOperaciones::~SalaOperaciones() {}