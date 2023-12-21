#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector <int> vet;

    for (int i = 99; i >= 0; i--) {
        vet.push_back(i);
        cout << vet.at(99 - i) <<endl;
    }
    
    return 0;
}