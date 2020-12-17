#include "Enfermeros.h"

Enfermeros::Enfermeros() {};

Enfermeros::Enfermeros(const TipoString &_nombre, TipoEntero _edad, const TipoString &_fechanacimiento, const TipoString _citas, const TipoString &_inst) {
    nombre=_nombre;
    edad = _edad;
    fechanacimiento = _fechanacimiento;
    instituto = _inst;
    citas = _citas;
    ofstream archivo;
    archivo.open(citas.c_str(),ios::out);
}

void Enfermeros::mostrar_info() {
    Persona::mostrar_info();
    cout<<"Instituto: "<<instituto<<endl;
}

void Enfermeros::ReservarCita(TipoString Hora, TipoString Nom_Doctor, TipoString Nom_Paciente,TipoEntero edad,TipoString Nacimiento, TipoString Enfermedad , bool enfermo) {
    ofstream archivo;
    archivo.open(citas.c_str(),ios::app);
    archivo<<"----------------------------"<<endl;
    archivo<<"Nombre del Paciente: "<<Nom_Paciente<<endl;
    archivo<<"Edad: "<<edad<<endl;
    archivo<<"Fecha de nacimiento: "<<Nacimiento<<endl;
    if(enfermo == true)
        archivo<<"Enfermedad: No tiene"<<endl;
    else
        archivo<<"Enfermedad: "<<Enfermedad<<endl;
    archivo<<"Fecha de la cita: "<<Hora<<endl;
    archivo<<"Doctor encargado: "<<Nom_Doctor<<endl;
}

Enfermeros::~Enfermeros() {};
