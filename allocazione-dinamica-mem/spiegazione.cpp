#include <iostream>

using namespace std;

int main() {
    int *puntatore = NULL, n = 5;         // assegno l'indirizzo inizialmente sempre NULL

    puntatore = &n;     // assegno il valore int alla cella di mem puntatore

    cout << "locazione:\t" << &puntatore << "\nvalore:\t" << *puntatore << endl;        // * per il contenuto della locazione & per l'indirizzo

    return 0;
}