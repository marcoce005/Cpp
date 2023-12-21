#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vet(6, 0);

    vet.push_back(7);
    vet.push_back(8);

    vet.insert(vet.begin() + 2, 100);

    vet.pop_back();
    vet.pop_back();

    for (int i = 0; i < vet.size(); i++) {
        cout << vet.at(i) << "\t"; 
    }

    cout << endl;
    
    return 0;
}