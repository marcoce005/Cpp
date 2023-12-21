#include <iostream>
#include <list>

using namespace std;

int main() {
    list <int> lista = {0, 11, 2, 3, 4, 54, 6, 87};
    list <int>::iterator iter;

    int x, cont = 0;
    cout << "\nInserire il valoer da trovare:\t";
    cin >> x;

    for (iter = lista.begin(); iter != lista.end(); ++iter) {
        if (*iter == x) {
            cout << "\nLocazione:\t" << cont << "\tovvero indirizzo\t" << &iter << endl;
            break;
        }
        cont++;
    }

    if (iter == lista.end()) {
        cout << "\nValore non trovato" << endl;
    }

    return 0;
}