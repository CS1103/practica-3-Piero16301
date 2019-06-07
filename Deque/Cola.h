#ifndef DEQUE_COLA_H
#define DEQUE_COLA_H

using namespace std;

template <typename T1>
void showQueue(queue <T1> gq) {
    queue <T1> g = gq;
    while (!g.empty()) {
        cout << g.front() << "  ";
        g.pop();
    }
    cout << '\n';
}

template <typename T1>
queue <T1> valoresMinimos(queue <T1> q1, int n) {
    queue <T1> cola_final;
    int size = q1.size();
    queue <T1> temp;
    for (int i = 0; i < size-(n-1); i++) {
        queue <T1> cola_temp = q1;
        for (int j = 0; j < n; j++) {
            temp.push(cola_temp.front());
            cola_temp.pop();
        }
        T1 menorValor = 1000;
        while (!temp.empty()) {
            if (temp.front() <= menorValor)
                menorValor = temp.front();
            temp.pop();
        }
        cola_final.push(menorValor);
        q1.pop();
    }
    return cola_final;
}

#endif //DEQUE_COLA_H