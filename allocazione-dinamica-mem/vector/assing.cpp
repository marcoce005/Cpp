#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> n) {
    for (int i : n) {
        cout << i << "\t";
    }
    cout << endl;
}

int main() {
    vector<int> vet;

    vet.assign(5, 10);          // crea un vetttore di 5 elementi con valore 10     [come fare vet(5, 10)]

    print(vet);

    return 0;
}