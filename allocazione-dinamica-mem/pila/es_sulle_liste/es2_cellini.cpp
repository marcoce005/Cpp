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
    list<int> n = {4, 34, 6, 1, 65, 76, 3, 3, 6, 34, 20, 32, 101}, reverse;
    list<int>::iterator it;

    for (it = n.begin(); it != n.end(); ++it) {
        reverse.push_front(*it);
    }

    print(it, n);
    print(it, reverse);

    return 0;
}