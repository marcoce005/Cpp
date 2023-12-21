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
    list <int> lista = {0, 11, 2, 3, 4, 54, 6, 87};
    list <int>::iterator iter;

    lista.pop_back();

    print(iter, lista);

    return 0;
}