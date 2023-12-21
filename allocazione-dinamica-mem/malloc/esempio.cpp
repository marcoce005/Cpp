#include <iostream>

#define l 3

using namespace std;

int main() {
    int *puntatore, *p_arr;

    puntatore = new int;        // genere dinamicamente una variabile, assegna il blocco di mem necessaria
    p_arr = new int[l];

    cout << &puntatore << "\t" << *puntatore << endl << &p_arr << "\t" << *p_arr << endl;

    delete puntatore;       // rilascia l'area che il puntatore stava puntando
    delete[] p_arr;

    //cout << &puntatore << "\t" << *puntatore << endl << &p_arr << "\t" << *p_arr << endl;cout << *puntatore << endl << *p_arr;

    return 0;
}