#include <iostream>
#include <list>

using namespace std;

void print(list<int> x) {
    for(int i : x) {
        cout << i << "\t";
    }
    cout << endl;
}

list<int> add(list<int> lista, list<int>::iterator it, int value, int address) {
    int cont = 0;
    for (it = lista.begin(); it != lista.end(); ++it) {
        if (cont == address - 1) {
            lista.insert(it, value);
            break;
        }
        cont++;
    }
    return lista;
}

list<int> fill_random() {
    list<int> lista;
    srand(time(NULL));
    for (int i = 0; i < 5; i++) {
        lista.push_back(rand());
    }
    return lista;
}

int main() {
    list<int> lista;
    list<int>::iterator it;

    lista = fill_random();

    lista = add(lista, it, 33, 3);

    print(lista);

    return 0;
}