#include <iostream>
#include <list>

using namespace std;

int main() {
    list <int> lista = {0, 11, 2, 3, 4, 54, 6, 87};
    list <int>::iterator iter;

    lista.sort();

    iter = lista.begin();
    cout << "\nMinimo:\t" << *iter << endl;

    iter = lista.end();
    cout << "\nMassimo:\t" << *--iter << endl;

    return 0;
}