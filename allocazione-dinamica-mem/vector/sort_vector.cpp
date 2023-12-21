#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool type_sort(int a, int b) {
    return a < b;
}

void print(vector<int> n) {
    for (int i : n) {
        cout << i << "\t";
    }
    cout << endl;
}

int main() {
    vector<int> vet = {4, 6, 1, 7, 23, 7, 2, 8, 6, 98, 3, 256, 45, 76};

    sort(vet.begin(), vet.end(), type_sort);

    print(vet);

    return 0;
}