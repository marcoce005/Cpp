#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector <int> vet(4, 9);

    vector<int>::iterator iter;

    iter = vet.begin();

    for (iter; iter != vet.end(); ++iter) {
        cout << *iter << endl;
    }
    
    return 0;
}