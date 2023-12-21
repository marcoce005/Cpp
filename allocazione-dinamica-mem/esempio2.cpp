#include <iostream>

using namespace std;

int main() {
    int n = 7, *p;

    p = &n;

    cout << "\nN:\t" << n << "\nPuntatore valore:\t" << *p << "\npuntatore indirizzo:\t" << &p << "\nindirizzo N:\t" << &n << endl;

    return 0;
}