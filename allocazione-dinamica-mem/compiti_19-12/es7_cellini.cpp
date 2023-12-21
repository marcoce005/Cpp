#include <iostream>
#include <list>

using namespace std;

void print(list <int>::iterator iter, list <int> lista) {
    for (iter = lista.begin(); iter != lista.end(); ++iter) {
        cout << *iter << "\t";
    }
}

int main() {
    list <int> lista = {1, 6, 5, 3 ,2};
    list <int>::iterator iteratore;

    iteratore = lista.begin();

    int x;
    cout << "\nInserire un valore nella lista:\t";
    cin >> x;
    lista.push_back(x);

    cout << "\nQuale tra questi numeri vuoi eliminare ["; 
    print(iteratore, lista);
    cout << "]:\t";
    cin >> x;
    lista.remove(x);

    cout << "\nLista finale:\n";
    print(iteratore, lista);
    cout << endl;

    return 0;
}