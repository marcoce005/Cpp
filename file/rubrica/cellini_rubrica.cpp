#include <iostream>
#include <fstream>
#include <string.h>
#include <cstdlib>

#define persone 3
int old_contact = 0;

using namespace std;

fstream Rubrica;

class rubrica {
    public:
        //int numero;
        string nome, cognome, numero;

        rubrica() {}
        ~rubrica() {}
        
};

rubrica r[100];

void search() {
    string nome, cognome;
    cout << "\nInserire il nome da cercare:\t";
    cin >> nome;
    cout << "Inserire il cognome da cercare:\t";
    cin >> cognome;

    for (int i = 0; i < persone + old_contact; i++) {
        if (nome == r[i].nome && cognome == r[i].cognome) {
            cout << "\nUtente trovato\n" << r[i].nome << " " << r[i].cognome << ":\t" << r[i].numero << endl;
            break;
        }
        else if (i == (persone + old_contact) - 1) {
            cout << "\nUtente inesistente" << endl;
        }
    }
}

void fill_from_file() {
    Rubrica.open("rubrica.txt", ios::in);

    string line[3];
    int i = 0;
    while (!Rubrica.eof()) {
        Rubrica >> line[i++];
        Rubrica >> line[i++];
        Rubrica >> line[i];

        r[old_contact].nome = line[0];
        r[old_contact].cognome = line[1].substr(0, (line[1].length() - 1));
        r[old_contact++].numero = line[2];

        i = 0;
    }

    Rubrica.close();
}

void control(string n, int x) {
    for (int i = 0; i < x; i++) {
        if (r[i].numero == n/*  && i != x */) {
            r[x].numero = "null";
            break;
        }
    }
}

void IO_fill_rub() {
    Rubrica.open("rubrica.txt", ios::app);

    for (int i = old_contact; i < persone + old_contact; i++) {
        cout << "\nInserire il nome:\t";
        cin >> r[i].nome;
        cout << "Inserire il cognome:\t";
        cin >> r[i].cognome;
        cout << "Inserire il numero di telefono:\t";
        cin >> r[i].numero;
        control(r[i].numero, i);
    }

    //Rubrica << endl;
    for (int i = 0; i < persone + old_contact; i++) {
        if (r[i].numero == "null") {
            Rubrica << endl << r[i].nome << " " << r[i].cognome << ":\t" << "numero ripetuto";
        }
        else if (i >= old_contact) {
            Rubrica << endl << r[i].nome << " " << r[i].cognome << ":\t" << r[i].numero;
        }
    }

    Rubrica.close();
}

int main() {
    fill_from_file();
    IO_fill_rub();
    search();

    return 0;
}