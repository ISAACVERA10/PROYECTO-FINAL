#ifndef PROYECTO_POO_ENFERMEROS_H
#define PROYECTO_POO_ENFERMEROS_H

#include "Personas.h"
class Enfermeros: public Persona{
protected:
    TipoString instituto;
    TipoString citas;
public:
    Enfermeros();
    Enfermeros(const TipoString &_nombre, TipoEntero _edad, const TipoString &_fechanacimiento,const TipoString _citas,const TipoString &_inst);

    void mostrar_info();

    void ReservarCita(TipoString Hora, TipoString Nom_Doctor, TipoString Nom_Paciente,TipoEntero edad,TipoString Nacimiento, TipoString Enfermedad , bool enfermo);

    ~Enfermeros();
};
#endif //PROYECTO_POO_ENFERMEROS_H
