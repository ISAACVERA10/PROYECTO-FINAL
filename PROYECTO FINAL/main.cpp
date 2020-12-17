#include <iostream>
#include <fstream>
#include "Clinica.h"

void agregar(Clinica &clc,Doctores &doc){
    clc+doc;
}

void agregar(Clinica &clc,Enfermeros &enf){
    clc + enf;
}

void Menu(){
    cout<<"1. Reservar una cita"<<endl;
    //cout<<"2. Sala de operaciones con Urgencia"<<endl;
    cout<<"2. Ver a nuestros doctores capacitados segun area"<<endl;
    cout<<"3. Formar parte de nuestros doctores o enfermeros"<<endl;
    cout<<"4. Visitar a un paciente"<<endl;
    cout<<"5. Salir de la Clinica"<<endl;
}

int main() {
    srand(time(NULL));
    ofstream archivo_citas;
    archivo_citas.open("citas.txt",ios::out);

    Doctores DC_Juan("Juan",38,"12/12/1990","Medicina General","UTEC",5);
    Doctores DC_Alberto("Alberto",40,"05/08/1985","Quirurgico","UNMSM",10);
    Enfermeros ENF_Pablo("Pablo",27,"06/06/1997","citas.txt","USIL");
    Clinica Clinica_SJB("San Juan Bautista",200,20);

    agregar(Clinica_SJB,DC_Juan);
    agregar(Clinica_SJB,DC_Alberto);
    agregar(Clinica_SJB,ENF_Pablo);

    cout<<"Bienvenido a la Clinica San Juan Bautista"<<endl;
    cout<<"Le presentamos lo que puede hacer en esta Clinica: "<<endl;

    Clinica_SJB.IniciarCuartos(20);

    int i=0;
    int opcion;

    while(i==0){
        Menu();
        cout<<"Eliga una opcion: ";
        cin>>opcion;
        cout<<endl;
        if(opcion == 1){
            cout<<"Reservando cita..."<<endl;
            Clinica_SJB.AgregarCita(Clinica_SJB);
        }
        else if(opcion == 2){
            cout<<Clinica_SJB;
        }
        else if(opcion == 3){
            Clinica_SJB.PertenecerAClinica();
            cout<<"Nosotros lo contactaremos, ya esta registrado ;).\n";
        }
        else if(opcion == 4){
            string paciente;
            cout<<"Nombre del paciente: "<<endl;
            cin>>paciente;
            Clinica_SJB.Buscar_Paciente(paciente);
        }
        else if(opcion == 5){
            cout<<"Hasta luego!, cuidese!"<<endl;
            i+=1;
        } else{
            cout<<"Opcion no valida, vuelva a escribir"<<endl;
        }

    }


    return 0;
}
