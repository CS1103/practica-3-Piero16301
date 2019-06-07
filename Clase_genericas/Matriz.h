#ifndef CLASE_GENERICAS_MATRIZ_H
#define CLASE_GENERICAS_MATRIZ_H

using namespace std;

template <class T1> class Matriz {

    T1 *datos;
    T1 *datos2;
    int columna, fila, columna1, fila1;


public:
    Matriz(int c, int f, T1 d, T1 d2,int f1, int co1) {
        columna1 = co1;
        fila1 = f1;
        columna = c;
        fila = f;
        datos = d;
        datos2 = d2;
    }

    Matriz(){
        columna=0;
        fila=0;
    }

    void Matriz_A() {
        cout << "\nNumero de Columnas: ";
        cin >> columna;
        cout << "Numero de Filas: ";
        cin >> fila;
        datos = new T1[columna,fila];

        for(int i = 1; i <= columna; i++) {
            for(int j = 1; j <= fila; j++) {
                cout << "A" << "[" << i << "," << j << "]: ";
                cin >> datos[i,j];
            }
        }
    }

    void Matriz_B() {
        cout << "\nNumero de Columnas: ";
        cin >> columna1;
        cout << "Numero de Filas: ";
        cin >> fila1;
        datos2 = new T1[columna1,fila1];

        for(int o = 1; o <= columna1; o++){
            for(int k = 1; k <= fila1; k++){
                cout << "B" << "[" << o << "," << k << "]: ";
                cin >> datos2[o,k];
            }
        }
    }

    Matriz operator+(Matriz objeto) {
        cout << "Entrando operador +";
        Matriz temporal;
        for(int i = 1; i <= columna; i++) {
            for(int j = 1; j <= fila; j++) {
                temporal.datos[i,j] = datos2[i,j] + objeto.datos[i,j];
            }
            cout << '\n';
        }

    }

    void mostrar();
};

template <class T1> void Matriz<T1>::mostrar() {
    for(int i = 1; i <= columna; i++) {
        for(int j = 1; j <= fila; j++) {
            cout << ".." << datos[i,j] << endl;
        }
    }
}

#endif //CLASE_GENERICAS_MATRIZ_H