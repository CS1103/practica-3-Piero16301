#include <iostream>
#include <stdio.h>
#include "Matriz.h"

using namespace std;

using TipoDato = int;

main() {

    Matriz <TipoDato> matrizA, matrizB;
    Matriz <TipoDato> matrizC;

    cout << "Elementos de la matriz A: ";
    matrizA.Matriz_A();

    cout << "Elementos de la matriz B: ";
    matrizB.Matriz_B();

    matrizC = matrizA + matrizB;
    matrizC.mostrar();

}