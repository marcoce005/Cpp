#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector <int> vet;

    int n;
    cout << "\nInserire il valore:\t";
    cin >> n;
    vet.push_back(n);
    cout << "\nInserire il valore:\t";
    cin >> n;
    vet.push_back(n);

    vet.push_back(vet.at(0) + vet.at(1));
    
    for (int i = 0; i < vet.size(); i++) {
        cout << vet.at(i) << endl;
    }

    return 0;
}