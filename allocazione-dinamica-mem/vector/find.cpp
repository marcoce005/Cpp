#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> vet = {4, 6, 1, 7, 23, 7, 2, 8, 6, 98, 3, 256, 45, 76};

    find(vet.begin(), vet.end(), 0) != vet.end() ? cout << "\nTrovato\n" : cout << "\nnon trovato\n";

    return 0;
}