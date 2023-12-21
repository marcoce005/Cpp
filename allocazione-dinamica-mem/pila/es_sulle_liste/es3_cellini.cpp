#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

void print(list <int>::iterator iter, list <int> lista) {
    for (iter = lista.begin(); iter != lista.end(); ++iter) {
        cout << *iter << "\t";
    }
    cout << endl;
}

int main() {
    list<int> n = {4, 34, 6, 1, 65, 76, 3, 3, 6, 34, 20, 32, 101};
    list<int>::iterator it;

    print(it, n);

    n.sort();
    print(it, n);

    n.reverse();
    print(it, n);

    return 0;
}