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
    list <int> lista = {1, 5, 4, 7, 2, 8, 5, 35, 5, 7};
    list <int>::iterator it;

    it = lista.begin();

    int x;
    for (int i = 0; i < 3; i++) {
        cout << "\nInserire un numero:\t";
        cin >> x;
        lista.push_back(x);
    }
    
    lista.sort();

    print(it, lista);
    
    return 0;
}