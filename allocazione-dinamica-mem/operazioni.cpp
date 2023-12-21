#include <iostream>

using namespace std;

int main() {
    int *p, n = 7;

    p = &n;

    cout << "\nPuntatore prima:\t" << &p;

    p++;

    cout << "\nIncremento puntatore:\t" << &p << "\nvalore corrispondente:\t" << *p << endl;
    
    return EXIT_SUCCESS;
}