#include <iostream>

using namespace std;

struct s_nodo{
    int info; 
    s_nodo *next;
};
typedef s_nodo nodo;
typedef nodo* pNodo;

int main() {
    pNodo p1, p2, pTesta, ptempo;       // definisco puntatori al tipo nodo
    
    p1 = new nodo;      // creao il primo nodo
    p1->info = 3;           // scrivo il dato nel nodo

    p2 = new nodo;        // creo il secondo nodo
    p2->info = 5;               //scrivo il dato nel secondo nodo

    // collegare i NODI
    p1->next = p2;

    cout << p1->info << endl;       // stampa il valore 1^ nodo
    cout << p2->info << endl;       // stampa valore 2^ nodo

    cout << p1->next << endl;       // stampa l'indirizzo del 2^ nodo
    cout << p2->next << endl;       // stampa l'indizzo del 3^ nodo (cioè NULL)

    cout << (p1->next)->info << endl;       // stampa il valore del 2^ nodo partendo dal primo nodo e arrivando al secondo
    

    // TIPI DI INSERIMENTO

    pTesta = p1;        // aggiorna il puntatore di testa della lista    

    // inserire un elemento in testa
    ptempo = new nodo;          // crea nuovo nodo
    ptempo->info = 0;       // assegno il valore 0

    return 0;
}