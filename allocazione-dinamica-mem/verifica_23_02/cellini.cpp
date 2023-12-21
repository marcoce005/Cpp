#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

struct Richiesta {
    string indirizzo;
    int prezzo;
    Richiesta *next;
};

struct Lista {
    Richiesta *testa;
};

void print(struct Lista *l) {
    struct Richiesta *temp = l->testa;

    cout << "\n\nIntervanti da soddisfare:\n";
    while (temp->next != NULL) {
        cout << temp->indirizzo << "\t\tcosto:\t" << temp->prezzo << " €" << endl;
        temp = temp->next;
    }
}

void push_back(struct Lista *l, string luogo, int costo) {
    struct Richiesta *tempR = l->testa;
    struct Richiesta *last = new Richiesta();           // nuovo terminatore della lista

    while (tempR->next != NULL) {               // scorro la lista fino all'ultimo elemento
        tempR = tempR->next;
    }

    tempR->indirizzo = luogo;
    tempR->prezzo = costo;
    tempR->next = last;
    last->next = NULL;
}

Lista first(struct Lista *l, string luogo, int costo) {             // creazione della lista
    Richiesta *r;
    l->testa = new Richiesta();
    r = l->testa;               // assegno la testa al il primo nodo creato

    r->indirizzo = luogo;
    r->prezzo = costo;
    r->next = new Richiesta();          // creo un secondo nodo che sara' il terminatore della lista con il next che punta a NULL
    (r->next)->next = NULL;

    return *l;
}

void pop_front(struct Lista *l) {
    struct Richiesta *tempR;
    tempR = l->testa;
    l->testa = tempR->next;             // assegno la testa della lista all'elemento successivo alla testa
    delete(tempR);          // rimuovo la vecchia testa della lista
}

int main() {
    Lista interventi;

    int prezzo, cont = 0;
    string address, temp;
    char valore;
    while (1) {                 // menu per selezionare la modalita' d'uso
        cout << "\n\nSelezionare la modalita' d'uso\n[a] per inserire una nuova richiesta\n[r] per rimuovere una richiesta soddisfatta\n[p] per visualizzare le richieste rimanenti\n[x] per terminare il programma\n...........";
        cin >> valore;

        switch (valore) {
        case 'a':
            cout << "\n\nInserire l'indirizzo:\t";
            getline(cin, temp);
            getline(cin, address);
            cout << "Inserire il costo dell'intervento:\t";
            cin >> prezzo;
            if (cont == 0) {interventi = first(&interventi, address, prezzo);}          //  se e' il primo inserimento creo la lista
            else {push_back(&interventi, address, prezzo);}                 // altrimenti aggiungo la richiesta in fondo alla lista
            break;

        case 'r':
            pop_front(&interventi);                 // elimina il valore in testa alla lista ovvero la richiesta soddisfatta
            break;
        case 'p':
            print(&interventi);             // stampa la lista
            break;

        case 'x':
            exit(1);            // termina il programma
            break;
        }
        cont++;
    }

    return 0;
}