#include <iostream>
#include <map>
#include "Mapa.h"

int main() {
    Seccion s1;
    s1.crearAlumno("Luis", 12.4);
    s1.crearAlumno("Juan", 13.4);
    s1.crearAlumno("Piero", 15.4);
    s1.crearAlumno("Jorge", 17.4);
    s1.crearAlumno("Angel", 18.4);
    s1.crearAlumno("Anthony", 19.4);
    s1.crearAlumno("Angelo", 14.4);
    s1.crearAlumno("Osman", 11.4);

    s1.imprimirAlumnos();

    s1.listarAlumno("Piero");
    s1.listarAlumno("Angel");

    s1.borrarAlumno("Angelo");
    s1.borrarAlumno("Juan");

    cout << '\n';

    s1.imprimirAlumnos();
    return 0;
}