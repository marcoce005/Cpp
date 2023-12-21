#include <iostream>
#include <list>

using namespace std;

void print(list<double>::iterator i, list<double> x) {
    for (i = --x.end(); i != --x.begin(); --i) {
        cout << *i << "\t";
    }
    cout << endl;
}

int main() {
    list<double> lista = {4, 71, 5, 5, 2, 76, 8, 38};
    list<double>::iterator iter;

    print(iter, lista);

    return 0;
}