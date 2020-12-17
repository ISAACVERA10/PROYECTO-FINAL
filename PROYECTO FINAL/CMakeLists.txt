cmake_minimum_required(VERSION 3.17)
project(PROYECTO_FINAL)

set(CMAKE_CXX_STANDARD 20)

add_executable(PROYECTO_FINAL Clinica.h Consultorio.h Cuartos.h Doctores.h Enfermeros.h Pacientes.h Personas.h
        SalaOperaciones.h tipos.h "Clinica.cpp" "Consultorio.cpp" "Cuartos.cpp" "Doctores.cpp" "Enfermeros.cpp" "Pacientes.cpp" "Personas.cpp"
        "SalaOperaciones.cpp" "main.cpp" )