#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

struct studente {
    int voto;
    string matricola;

    studente *next;
};

typedef studente* lista;

fstream output;

lista add(lista p0) {
    lista p, q;

    for (q = p0; q != 0; q = q->next) {p = q;}

    q = new studente;
    cout << "\nInserire matricola:\t";
    cin >> q->matricola;
    cout << "Inserire voto:\t";
    cin >> q->voto;

    q->next = 0;
    p0 == 0 ? p0 = q : p->next = q;

    return p0;
}

void print(lista p0) {
    output.open("output.txt", ios::out);

    while (p0 != NULL) {
        output << p0->matricola << " -> " << p0->voto;
        if (p0->voto >= 18 && p0->voto <= 30) {
            output << "\tEsame passato\n";
        } else if (p0->voto > 30) {
            output << "\tVoto errato\n";
        } else {
            output << "\tEsame NON passato\n";
        }
        p0 = p0->next;
    }
    exit(1);
}

int main() {
    lista esame = 0;
    char scelta;
    while (1) {
        cout << "\nScegliere la modalita' [a] per aggiungere [e] per terminare il programma:\t";
        cin >> scelta;

        switch (scelta) {
            case 'a':
                esame = add(esame);
            break;

            case 'e':
                print(esame);
            break;
        }
    }

    return 0;
}