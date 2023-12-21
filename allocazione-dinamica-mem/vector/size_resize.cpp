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
    vector<int> vet = {4, 6, 1, 7, 23, 7, 2, 8, 6, 98, 3, 256, 45, 76};

    vet.resize(10);     // per tenere solo i primi 10 elementi

    print(vet);

    return 0;
}