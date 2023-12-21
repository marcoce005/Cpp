#include <iostream>
#include <vector>

using namespace std;

void print(vector <int> vett) {
    for (int i = 0; i < vett.size(); i++) {
        cout << vett.at(i) << "\t";
    }
    cout << endl;
}

int main() {
    vector <int> vet = {-1, 9, 0, -16, 4, 1, -9, 10};

    for (int i = 0; i < vet.size(); i++) {
        if (vet.at(i) < 0) {
            vet.at(i) = 0;
        }
    }
    
    print(vet);

    return 0;
}