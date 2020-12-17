#include "Pacientes.h"

Pacientes::Pacientes() {};

Pacientes::Pacientes(const TipoString &_nombre, TipoEntero _edad, const TipoString &_fechanacimiento, const TipoString &_enfermedad, bool _enfermo) {
    nombre = _nombre;
    edad = _edad;
    fechanacimiento = _fechanacimiento;
    enfermedad = _enfermedad;
    enfermo = _enfermo;
}

void Pacientes::mostrar_info() {
    Persona::mostrar_info();
    cout<<"Enfermedad: "<<enfermedad<<endl;
    if(enfermo){
        cout<<"El paciente sigue enfermo"<<endl;
    }
    else{
        cout<<"El paciente ya se recupero"<<endl;
    }
}

string Pacientes::get_nombre() {
    return nombre;
}

Pacientes::~Pacientes() {};