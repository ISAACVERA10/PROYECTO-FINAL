
#ifndef PROYECTO_POO_CLINICA_H
#define PROYECTO_POO_CLINICA_H
#include <iostream>
#include "SalaOperaciones.h"
#include "Consultorio.h"
#include "Doctores.h"
#include "Enfermeros.h"
#include "Pacientes.h"
#include "tipos.h"

class Clinica {
protected:
    TipoString nombre;
    TipoEntero aforo_max;
    TipoEntero num_cuartos;
    vector<Doctores> doctores;
    vector<Enfermeros> enfermeros;
    vector<Pacientes> pacientes;
    vector<Consultorio> *consultorios;

public:
        Clinica();

        Clinica(const TipoString &_nombre, TipoEntero _afo, TipoEntero _num_cuartos);

        void IniciarCuartos(TipoEntero num_cuartos);

        void agregardoctor(Doctores doc);

        void operator+(Doctores doc);

        void agregarenfermero(Enfermeros enf);

        void operator+(Enfermeros enf);

        void agregarpaciente(Pacientes pac);

        void operator+(Pacientes pac);

        void set_aforo(int);

        int get_aforo();

        void MostrarDoctores();

        void MostrarPacientes();

        void MostrarEnfermeros();

        void AgregarCita(Clinica &clic);

        void PertenecerAClinica();

        bool Buscar_Paciente(string nombre);

        friend ostream& operator<<(ostream &out,Clinica &cli);


        ~Clinica();
};

#endif //PROYECTO_POO_CLINICA_H
