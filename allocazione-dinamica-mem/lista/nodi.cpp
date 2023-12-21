#include <iostream>
#include <list>

using namespace std;

struct nodo {       // struttura nodo           -->>        informazione del valore + puntatore successivo
    int info;
    nodo *next;
};

typedef nodo *pnodo;     // rinomina la struttura

void stampa(pnodo p) {
    while (p != NULL) {         // finchè il puntatore e' diverso da NULL
        cout << "[" << p->info << "] -> ";
        p = p->next;                                            //stampa la lista
    }
    cout << "NULL" << endl;   
}

/* void stampa(pnodo p);  */            // forward declaretion      prototipo della funzione la funzione poi la si scrive in fondo

int main() {
    pnodo ptesta, pcoda, ptemp, p1, p2, p3;       // puntatori al tipo nodo

    p1 = new nodo;      // creao nodo
    p1->info = 5;       // scrivo il valore a cui corrisponde il nodo

    p2 = new nodo;
    p1->next = p2;      // lega il p1 con il p2
    p2->info = 7;

    p3 = new nodo;
    p2->next = p3;      // lega il p2 al p3
    p3->info = 11;
    p3->next = NULL;

    cout << p2->info << endl;       // stampa il secondo valore
    cout << &p1->next << endl;       // stampa il puntatore successivo al valore 1

    cout << "\nLista:\t";
    stampa(p1);         // stampa la lista

    // Aggiungere un elemento/nodo in TESTA

    /* ptesta = p1;        // assegna il puntore di testa da 1 a ptesta
    ptemp = new nodo;           // crea un puntatore temporaneo
    ptemp->info = 99;       // assegna il valore temp = 99
    ptemp->next = ptesta;       // mette l'indirizzo della testa

    ptesta = ptemp;     // aggiorno il puntatore alla testa
 */

    ptesta = new nodo;
    ptesta->info = 99;
    ptesta->next = p1;

    cout << "\nLista:\t";
    stampa(ptesta);

    // Aggiungere un elemento/nodo in CODA

    pcoda = new nodo;
    pcoda->info = 107;     // aggiorno il puntatore alla testa

    p3->next = pcoda;       // lega p3 con pcoda
    pcoda->next = NULL;

    cout << "\nLista:\t";
    stampa(ptesta);

    return 0;
}