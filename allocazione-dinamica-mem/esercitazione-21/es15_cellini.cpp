#include <iostream>
#include <list>

using namespace std;

void print(list<int> x) {
    for (int i : x) {
        cout << i << "\t";
    }
    cout << endl;
}

int found() {
    int value;
    cout << "\nInserire il valore da cercare nella lista:\t";
    cin >> value;
    return value;
}

int main() {
    list<int> lista = {4, 71, 5, 5, 2, 75, 38, 38, 4, 5};
    list<int>::iterator iter, it;
    list<int> indirizzi;

    int x = found(), cont = 0;

    for (int i : lista) {
        if (i == x) {
            indirizzi.push_back(cont + 1);
        }
        cont++;
    }

    if (indirizzi.size() == 0) {
        cout << "\nIl numero non e' presente nella lista" << endl;
    } else {
        cout << "\nIl numero [" << x << "] compare nella lista nelle seguenti celle:\n";
        print(indirizzi);
    }

    return 0;
}