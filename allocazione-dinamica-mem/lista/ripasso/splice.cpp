#include <iostream>
#include <list>

using namespace std;

void print(list<int> x) {
    for (int i : x) {
        cout << i << "\t";
    }
    cout << endl;
}

int main() {
    list<int> l1 = {1, 3, 6, 2, 7, 3};
    list<int> l2 = {100, 100, 100};    
    list<int>::iterator it;

    int cont = 0, address = 3;
    for (it = l1.begin(); it != l1.end(); ++it) {
        if (cont == address -1) {
            l1.splice(it, l2);
            break;
        }
        cont++;
    }

    print(l1);

    return 0;
}