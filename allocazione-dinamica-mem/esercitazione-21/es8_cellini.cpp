#include <iostream>
#include <list>

using namespace std;

int main() {
    list <double> lista = {0, 11, 2, 3, 4, 54, 6, 87};
    list <double>::iterator iter;

    double tot = 0;
    for (iter = lista.begin(); iter != lista.end(); ++iter) {
        tot += *iter;
    }

    cout << "\nTotale:\t" << tot << endl;

    return 0;
}