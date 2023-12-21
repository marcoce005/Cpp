#include <iostream>
#include <list>

using namespace std;

void print(list<int> x) {
    for (int i : x) {
        cout << i << "\t";
    }
    cout << endl;
}

int main() {
    list<int> l1 = {1, 2, 4, 6, 3, 9};
    list<int> l2(6, 0);

    l1.swap(l2);

    cout << "\nL1 = ";
    print(l1);
    cout << "\nL2 = ";
    print(l2); 

    return 0;
}