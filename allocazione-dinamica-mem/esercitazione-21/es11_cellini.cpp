#include <iostream>
#include <list>

using namespace std;

void print(list <double> x) {
    for (double i : x) {
        cout << i << "\t";
    }
    cout << endl;
}

int main() {
    list<double> lista = {4, 71, 5, 5, 2, 76, 8, 38};

    lista.sort();

    print(lista);

    return 0;
}