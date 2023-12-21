#include <iostream>
#include <list>

using namespace std;

void print(list<double> x) {
    for (int i : x) {
        cout << i << "\t";
    }
    cout << endl;
}

int main() {
    list<double> lista = {4, 71, 5, 5, 2, 76, 38, 38};
    list<double>::iterator iter, it;
    list<double> doppi;

    lista.sort();

    int cont = 0;
    bool ok;
    for (iter = lista.begin(); iter != lista.end(); ++iter) {
        for (it = lista.begin(); it != lista.end(); ++it) {
            for (int i : doppi) {
                if (*iter == i) {ok = 1;}
            }
            if (*iter == *it && ok == 0) {
                cont++;
            }
        }

        if (cont > 1) {
            doppi.push_back(*iter);
        }
        cont = 0;
        ok = 0;
    }

    print(doppi);

    return 0;
}