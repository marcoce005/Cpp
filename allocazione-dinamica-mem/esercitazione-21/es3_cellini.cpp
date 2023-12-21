#include <iostream>
#include <list>

using namespace std;

int main() {
    list <int> lista = {0, 11, 2, 3, 4, 54, 6, 87};
    list <int>::iterator iter;

    iter = lista.end();

    --iter;

    cout << *--iter << endl;

    return 0;
}