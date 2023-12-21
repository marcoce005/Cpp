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
    vector<int> vet1 = {1, 4, 6, 4, 7, 5, 4, 3, 7};
    vector<int> vet2 = {6, 3, 5, 2, 8};
    
    vet1.swap(vet2);            // copia il primo vettore nel secondo e viceversa

    print(vet1);
    print(vet2);

    return 0;
}