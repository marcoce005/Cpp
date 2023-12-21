#include <iostream>
#include <list>

using namespace std;

void print(list <int>::iterator iter, list <int> lista) {
    for (iter = lista.begin(); iter != lista.end(); ++iter) {
        cout << *iter << "\t";
    }
    cout << endl;
}

int main() {
    list <int> lista = {0, 1, 2, 3, 4, 5, 6, 7};
    list <int>::iterator iter;

    list <int> lista2;

    for (iter = lista.begin(); iter != lista.end(); ++iter) {
        lista2.push_front(*iter);
    }

    print(iter, lista2);

    return 0;
}