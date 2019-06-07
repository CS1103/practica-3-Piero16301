#include <iostream>
#include <queue>
#include "Cola.h"

using namespace std;

using TipoDato = int;

int main() {
    queue <TipoDato> cola1;
    int n = 3;
    cola1.push(5);
    cola1.push(1);
    cola1.push(4);
    cola1.push(8);
    cola1.push(2);
    cola1.push(4);
    queue <TipoDato> resultado = valoresMinimos(cola1, n);
    showQueue(resultado);
    return 0;
}