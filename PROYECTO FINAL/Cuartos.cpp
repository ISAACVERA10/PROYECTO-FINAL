#include "Cuartos.h"

Cuarto::Cuarto() {}

Cuarto::Cuarto(TipoEntero _num_id, TipoEntero _aforo) {
    num_id = _num_id;
    aforo = _aforo;
}

void Cuarto::Mostrar() {
    cout<<"Numero: "<<num_id<<endl;
    cout<<"Aforo: "<<aforo<<endl;
    if(lleno){
        cout<<"Esta lleno"<<endl;
    } else{
        cout<<"Esta vacio"<<endl;
    }
}

Cuarto::~Cuarto() {}