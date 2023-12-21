#include <iostream>
#include <list>

using namespace std;

void print(list <int> x) {
    for (int i : x) {
        cout << i << "\t";
    }
    cout << endl;
}

int main() {
    list <int> lista = {0, 11, 2, 3, 4, 54, 6, 87};
    list<int> p, d;

    for (int i : lista) {
        i % 2 == 0 ? p.push_back(i) : d.push_back(i);
    }

    cout << "\nPari:\t";
    print(p);

    cout << "\nDispari:\t";
    print(d);

    return 0;
}