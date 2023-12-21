#include <iostream>
#include <fstream>
#include <string.h>
#include <cstdlib>

#define persone 3
int old_contact = 0;

using namespace std;

fstream Rubrica, Rubrica2;

class rubrica {
    public:
        string nome, cognome, numero, email;

        rubrica() {}
        ~rubrica() {}
};
rubrica r[100];

void rm() {
    Rubrica2.open("rubrica2.txt", ios::app);

    if (Rubrica2.is_open() == 0) {
        cout << "\nFile non aperto" << endl;
        exit(1);
    }

    string cognome;
    cout << "\nInserire il cognome da eliminare:\t";
    cin >> cognome;

    for (int i = 0; i < persone + old_contact; i++) {
        if (cognome != r[i].cognome) {
            Rubrica2 << r[i].cognome << " " << r[i].nome << " " << r[i].numero << " " << r[i].email << endl;

            if (i == (persone + old_contact) -1) {
                cout << "\nUtente inesistente\nImpossibile cancellarlo" << endl;
            }
        }
    }

    cout << "\n\nRubrica:";
    for (int i = 0; i < old_contact + persone; i++) {
        if (cognome != r[i].cognome) {
            cout << endl << r[i].cognome << " " << r[i].nome << " " << r[i].numero << " " << r[i].email;
        }
    }
    cout << endl;

    Rubrica2.close();
}

void search() {
    string cognome;
    cout << "\nInserire il cognome da cercare:\t";
    cin >> cognome;

    for (int i = 0; i < persone + old_contact; i++) {
        if (cognome == r[i].cognome) {
            cout << "\nUtente trovato\n" << r[i].cognome << " " << r[i].nome<< " " << r[i].numero << " " << r[i].email << endl;
            break;
        }
        else if (i == (persone + old_contact) - 1) {
            cout << "\nUtente inesistente" << endl;
        }
    }
}

void fill_from_file() {
    Rubrica.open("rubrica.txt", ios::in);

    if (Rubrica.is_open() == 0) {
        cout << "\nFile non aperto" << endl;
        exit(1);
    }

    string line[4];
    int i = 0;
    while (!Rubrica.eof()) {
        Rubrica >> line[i++];
        Rubrica >> line[i++];
        Rubrica >> line[i++];
        Rubrica >> line[i];

        r[old_contact].cognome= line[0];
        r[old_contact].nome = line[1];
        r[old_contact].numero = line[2];
        r[old_contact++].email = line[3];

        i = 0;
    }

    Rubrica.close();
}

void IO_fill_rub() {
    Rubrica.open("rubrica.txt", ios::app);

    if (Rubrica.is_open() == 0) {
        cout << "\nFile non aperto" << endl;
        exit(1);
    }

    for (int i = old_contact; i < persone + old_contact; i++) {
        cout << "\nInserire il cognome:\t";
        cin >> r[i].cognome;
        cout << "Inserire il nome:\t";
        cin >> r[i].nome;
        cout << "Inserire il numero di telefono:\t";
        cin >> r[i].numero;
        cout << "Inserire l'email:\t";
        cin >> r[i].email;
    }

    for (int i = old_contact; i < persone + old_contact; i++) {
        Rubrica << endl << r[i].cognome << " " << r[i].nome << " " << r[i].numero << " " << r[i].email;
    }

    Rubrica.close();
}

void clean() {
    remove("rubrica2.txt");
}

int main() {
    clean();
    fill_from_file();
    IO_fill_rub();
    search();
    rm();

    return 0;
}