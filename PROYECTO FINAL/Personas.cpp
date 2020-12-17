#include "Personas.h"

Persona::Persona() {};

Persona::Persona(const TipoString &_nombre,TipoEntero _edad,const TipoString &_fechanacimiento) {
    nombre=_nombre;
    edad = _edad;
    fechanacimiento = _fechanacimiento;
}
void Persona::mostrar_info() {
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
    cout<<"Fecha de nacimiento: "<<fechanacimiento<<endl;
}

Persona::~Persona() {};