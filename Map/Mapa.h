#ifndef MAP_MAPA_H
#define MAP_MAPA_H

using namespace std;

class Seccion {
    map <string, double> alumnos;

public:
    void crearAlumno(string alumno, double nota) {
        alumnos[alumno] = nota;
    }

    void listarAlumno(string alumno) {
        cout << alumno << ": " << alumnos[alumno] << '\n';
    }

    void borrarAlumno(string alumno) {
        alumnos.erase(alumno);
    }

    void imprimirAlumnos() {
        map<string, double >::iterator itr;
        cout << "Los datos de los alumnos son: " << '\n';
        cout << "Nombre\tNota\n";
        for (itr = alumnos.begin(); itr != alumnos.end(); itr++) {
            cout << itr->first << '\t' << itr->second << '\n';
        }
        cout << endl;
    }
};

#endif //MAP_MAPA_H