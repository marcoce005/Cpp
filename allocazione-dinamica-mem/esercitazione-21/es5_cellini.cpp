#include <iostream>
#include <list>

using namespace std;

int main() {
    list <int> lista = {0, 11, 2, 3, 4, 54, 6, 87};
    list <int>::iterator iter;

    int x, cont = 0;
    cout << "\nInserire la cella di memoria:\t";
    cin >> x;

    for (iter = lista.begin(); iter != lista.end(); ++iter) {
        cont++;
        if (cont == x) {
            cout << "\nValore:\t" << *iter << endl;
            break;
        }
    }

    return 0;
}