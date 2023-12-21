#include <iostream>

using namespace std;

int main() {
    int n1 = 20, n2, *pun = NULL;

    pun = &n1;      // assegno il valore n1 alla locazione di memoria pun 
    n2 = *pun;          // assegno il valore corrispondente alla locazione di mem pun alla variabile n2

    *pun += 500;

    cout << "\nN1:\t" << n1 << "\nN2:\t" << n2 << "\nPuntatore valore:\t" << *pun << "\nPuntatore indirizzo:\t" << &pun << endl;

    return 0;
}