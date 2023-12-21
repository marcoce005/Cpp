#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vet = {1, 2, 3, 4};
    vector<int>::iterator iteratore1;          // iteratore == puntatore
    
    iteratore1 = vet.begin();       // l'iteratore punta alla prima locazione del vettore

    for (iteratore1 = vet.begin(); iteratore1 != vet.end(); ++iteratore1) {
        cout << *iteratore1 << "\t";            // scorre il vettore con gli iteratori (come i puntatori)
    }

    cout << endl;

    return 0;
}