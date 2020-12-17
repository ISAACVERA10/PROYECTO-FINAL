    #include "Clinica.h"

Clinica::Clinica() {}

Clinica::Clinica(const TipoString &_nombre, TipoEntero _afo,TipoEntero _num_cuartos){
    nombre = _nombre;
    aforo_max = _afo;
    num_cuartos = _num_cuartos;

}

void Clinica::IniciarCuartos(TipoEntero num_cuartos) {
    int tam1 = num_cuartos/2;
    int tam2 = num_cuartos-tam1;
    consultorios = new vector<Consultorio>(tam1);
    for (int i = 0; i < tam1 ; i++) {
        int num_sala = 1+rand()%(31-1);
        int pos = 0 + rand()%(doctores.size()-1);
        string encargado = doctores[pos].get_nombre();
        Consultorio consult(num_sala,1,encargado);
        //consult.Mostrar();
        (*consultorios)[i]=consult;
    }
    for (int j = 0; j < tam2; j++) {
        int num_sala = 1+rand()%(31-1);
        int pos = 0 + rand()%(doctores.size()-1);
        vector<string> encargados;
        int pos_two;
        if(pos>0)
            pos_two = pos -1;
        else
            pos_two = pos +1;
        encargados.push_back(doctores[pos].get_nombre());
        encargados.push_back(doctores[pos_two].get_nombre());
        SalaOperaciones sala(num_sala,2,encargados);
    }

}

void Clinica::agregardoctor(Doctores doc) {
    doctores.push_back(doc);
    set_aforo(-1);
}

void Clinica::operator+(Doctores doc) {
    doctores.push_back(doc);
    set_aforo(-1);
}

void Clinica::agregarenfermero(Enfermeros enf) {
    enfermeros.push_back(enf);
    set_aforo(-1);
}

void Clinica::operator+(Enfermeros enf) {
    enfermeros.push_back(enf);
    set_aforo(-1);
}

void Clinica::agregarpaciente(Pacientes pac) {
    pacientes.push_back(pac);
    set_aforo(-1);
}

void Clinica::operator+(Pacientes pac) {
    pacientes.push_back(pac);
    set_aforo(-1);
}

void Clinica::set_aforo(int num){
    aforo_max = num;
}

int Clinica::get_aforo(){
    return aforo_max;
}

void Clinica::MostrarDoctores() {
    cout<<endl;
    for(int i = 0 ; i < doctores.size(); i++){
        cout<<"Doctor "<<i+1<<" : "<<endl;
        doctores[i].mostrar_info();
    }
    cout<<endl;
}

void Clinica::MostrarEnfermeros() {
    cout<<"Nuestros Enfermeros: "<<endl;
    for(int i = 0 ; i< enfermeros.size(); i++){
        enfermeros[i].mostrar_info();
    }
    cout<<endl;
}

void Clinica::MostrarPacientes() {
    cout<<"Nuestros Pacientes: "<<endl;
    for (int i = 0; i < pacientes.size() ; i++) {
        pacientes[i].mostrar_info();
    }
}

void Clinica::AgregarCita(Clinica &clic) {
    cout<<"Tenemos los siguientes doctores para que lo puedan atender: ";
    Clinica::MostrarDoctores();
    char nombre_paciente[50];
    int edad;
    char fecha_nacimiento[50];
    char enfermedad[50];
    bool enfermo;
    char nombre_doctor[50];
    char fecha[50];
    cout<<"Ahora bien, digite los datos solicitados: "<<endl;
    cout<<"Nombre del Paciente: ";
    cin>>nombre_paciente;
    //cin.getline(nombre_paciente,sizeof(nombre_paciente));
    cout<<"Edad : ";
    cin>>edad;
    cout<<"Fecha de Nacimiento: ";
    cin>>fecha_nacimiento;
    //cin.getline(fecha_nacimiento,sizeof(fecha_nacimiento));
    cout<<"¿Esta enfermo?: \n";
    int i;
    cout<<"1. Si | 2. No\n";
    cin>>i;
    if (i == 1){
        enfermo = true;
        cout<<"Que enfermedad tiene: ";
        cin>>enfermedad;
        //cin.getline(enfermedad,sizeof(enfermedad));
        cout<<"Nombre del Doctor: ";
        cin>>nombre_doctor;
        //cin.getline(nombre_doctor,sizeof(nombre_doctor));
        cout<<"Fecha mas cercana: ";
        cin>>fecha;
        //cin.getline(fecha,sizeof(fecha));
        enfermeros[0].ReservarCita(fecha,nombre_doctor,nombre_paciente,edad,fecha_nacimiento,enfermedad,enfermo);
        Pacientes nuevo(nombre_paciente,edad,fecha_nacimiento,enfermedad,enfermo);
        clic+nuevo;
        cout<<"Su cita a sido reservada con exito!"<<endl;
    }else {
        enfermo = false;
        cout<<"Nombre del Doctor: ";
        cin>>nombre_doctor;
        //cin.getline(nombre_doctor,sizeof(nombre_doctor));
        cout<<"Fecha mas cercana: ";
        cin>>fecha;
        //cin.getline(fecha,sizeof(fecha));
        enfermeros[0].ReservarCita(fecha,nombre_doctor,nombre_paciente,edad,fecha_nacimiento,enfermedad,enfermo);
        Pacientes nuevo(nombre_paciente,edad,fecha_nacimiento,"No tiene",enfermo);
        clic+nuevo;
        cout<<"Su cita a sido reservada con exito!"<<endl;
    }
}

void Clinica::PertenecerAClinica() {
    int edad;
    char fecha_nacimiento[50];
    char estudios[50];
    char nombre[50];
    char area[50];
    string eleccion;
    cout<<"Gracias por Querer formar parte de la Familia!\n";
    cout<<"Dinos, quieres ser doctor o enfermero?: ";
    cin>>eleccion;
    if( eleccion=="doctor"){
        cout<<"Su nombre: ";
        cin>>nombre;
        //cin.getline(nombre_paciente,sizeof(nombre));
        cout<<"Edad : ";
        cin>>edad;
        cout<<"Fecha de Nacimiento: ";
        cin>>fecha_nacimiento;
        //cin.getline(fecha_nacimiento,sizeof(fecha_nacimiento));
        cout<<"Area al que desea pertenecer: ";
        cin>>area;
        //cin.getline(area,sizeof(area));
        cout<<"Lugar de estudios universitarios: ";
        cin>>estudios;
        //cin.getline(estudios,sizeof(estudios));
    }
    else if(eleccion == "enfermero"){
        cout<<"Su nombre: ";
        cin>>nombre;
        //cin.getline(nombre_paciente,sizeof(nombre));
        cout<<"Edad : ";
        cin>>edad;
        cout<<"Fecha de Nacimiento: ";
        cin>>fecha_nacimiento;
        //cin.getline(fecha_nacimiento,sizeof(fecha_nacimiento));
        cout<<"Instituto : ";
        cin>>estudios;
        //cin.getline(estudios,sizeof(estudios));
    }

}

bool Clinica::Buscar_Paciente(string nombre) {
    for (int i = 0; i < pacientes.size() ; i++) {
        if(pacientes[i].get_nombre() == nombre){
            cout<<"Efectivamente, el paciente se encuentra internado\n";
            cout<<"Estos son sus datos: \n";
            pacientes[i].mostrar_info();
            return true;
        }
    }
    cout<<"Lo sentimos, el paciente no esta registrado.\n";
    return false;
}


ostream &operator<<(ostream &out,Clinica &cli) {
    cout<<"Nuestros Doctores son:\n";
    cli.MostrarDoctores();
    cout<<endl;
    cout<<"Nuestros Enfermeros son:\n";
    cli.MostrarEnfermeros();
}

Clinica::~Clinica() {
    delete consultorios;
}
