#include <iostream>
#include <vector>
#include <cmath>

#define L 9        // deve essere per forza dispari escluso 1

using namespace std;

void print(vector <int> vett) {
    for (int i = 0; i < vett.size(); i++) {
        cout << vett.at(i) << "\t";
    }
    cout << endl;
}

int main() {
    vector <int> vet(L, 0);

    int centro = vet.size() / 2;

    vet.at(centro) = 1;

    print(vet);

    return 0;
}