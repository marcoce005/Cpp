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
    list<int> l1 = {3, 6, 6, 3, 7, 1, 6, 10};
    list<int> l2 = {5, 2, 6, 1, 7, 4 ,7, 3};

    l1.sort();
    l2.sort();

    l1.merge(l2);

    print(l1);

    return 0;
}