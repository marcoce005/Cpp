#include <iostream>
#include <fstream>

#define people 3

using namespace std;

class dati {
    public:
        string nome, cognome, sezione;
        int classe;
        bool evento, cena;

        dati() {}
        ~dati() {}
};

dati d[people];

fstream elenco, partecipanti, cena;

void fill() {
    elenco.open("elenco.txt", ios::out);
    partecipanti.open("partecipanti.txt", ios::out);
    cena.open("cena.txt", ios::out);
    
    string ok;
    for (int i = 0; i < people; i++) {
        cout << "\nInserire nome:\t";
        cin >> d[i].nome;
        elenco << d[i].nome << " ";
        cout << "Inserire cognome:\t";
        cin >> d[i].cognome;
        elenco << d[i].cognome << " ";
        cout << "Inserire classe [1-2-3-4-5]:\t";
        cin >> d[i].classe;
        elenco << d[i].classe << " ";
        cout << "Inserire sezione [ITT-Liceo]:\t";
        cin >> d[i].sezione;
        elenco << d[i].sezione << " ";
        cout << "Partecipi all'evento [Si-No]:\t";
        cin >> ok;
        if (ok == "Si") {
            d[i].evento = 1;
            elenco << ok << " ";
            partecipanti << d[i].nome << " " << d[i].cognome << endl;
        }
        else {
            d[i].evento = 0;
            elenco << ok << " ";
        }
        cout << "Partecipi alla cena [Si-No]:\t";
        cin >> ok;
        if (ok == "Si") {
            d[i].cena= 1;
            elenco << ok << endl;
            cena << d[i].nome << " " << d[i].cognome << endl;
        }
        else {
            d[i].cena = 0;
            elenco << ok << endl;
        }
    }

    elenco.close();
    partecipanti.close();
    cena.close();
}

void conta() {
    partecipanti.open("partecipanti.txt", ios::app);
    cena.open("cena.txt", ios::app);

    int tot_evento = 0, tot_cena = 0;
    for (int i = 0; i < people; i++) {
        tot_evento += d[i].evento;
        tot_cena += d[i].cena;
    }

    partecipanti << "\n\nPartecipano all'evento:\t" << tot_evento << " persone";
    cena << "\n\nPartecipano alla cena:\t" << tot_cena << " persone";

    cout << "\nPartecipazione all'evento:\t" << (float(tot_evento) / float(people)) * 100 << "%\nPartecipazione alla cena:\t" << (float(tot_cena) / float(people)) * 100 << "%" << endl;

    partecipanti.close();
    cena.close();
}

int main() {
    fill();
    conta();

    return EXIT_SUCCESS;
}