#include "Doctores.h"

Doctores::Doctores(){};
Doctores::Doctores(const TipoString &_nombre, TipoEntero _edad,const TipoString &_fechanacimiento,const TipoString &_area,const TipoString &_uni,TipoEntero _anhos){
        nombre=_nombre;
        edad = _edad;
        fechanacimiento = _fechanacimiento;
        area = _area;
        universidad = _uni;
        anhos = _anhos;
}

TipoString Doctores::get_nombre() {
    return nombre;
}

void Doctores::mostrar_info(){
    Persona::mostrar_info();
    cout<<"Area: "<<area<<endl;
    cout<<"Universidad: "<<universidad<<endl;
    cout<<"Tiempo trabajando: "<<anhos<<" anhos"<<endl;
}

Doctores::~Doctores(){};

