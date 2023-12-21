#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector <int> vet = {2, 5, 4, 5, 0, 4, 7};

    int cont = 0;

    for (int i = 0; i < vet.size(); i++) {
        if (vet.at(i) == 0) {
            cont++;
        }
    }
    
    cout << "\nCi sono " << cont << " zeri\n";

    return 0;
}