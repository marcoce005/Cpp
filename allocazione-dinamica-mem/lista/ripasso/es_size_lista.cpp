#include <iostream>
#include <list>

using namespace std;

void print(int x) {
    cout << "\nLunghezza:\t" << x << endl;
}

int main() {
    list<int> l = {1, 1, 2, 3, 5};

    print(l.size());

    l.pop_front();

    print(l.size());

    l.clear();

    print(l.size());

    return 0;
}