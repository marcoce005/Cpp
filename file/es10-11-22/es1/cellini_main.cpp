#include <iostream>
#include <fstream>

#define alunni 1
int old = 0;

using namespace std;

fstream Scrutini;

class scrutini {
    public:
        int matricola, voto;
        string nome, cognome, giudizio;

        scrutini() {}
        ~scrutini() {}      
};

scrutini s[100];

void fill_from_file() {
    Scrutini.open("scrutini.txt", ios::in);

    string line[5];
    int i = 0;
    while (!Scrutini.eof()) {
        Scrutini >> line[i++];
        Scrutini >> line[i++];
        Scrutini >> line[i++];
        Scrutini >> line[i++];
        Scrutini >> line[i];

        s[old].matricola = stoi(line[0]);
        s[old].nome = line[1];
        s[old].cognome = line[2];
        s[old].voto = stoi(line[3]);
        s[old++].giudizio = line[4];

        i = 0;
    }

    Scrutini.close();
}

void IO_fill_scru() {
    Scrutini.open("scrutini.txt", ios::app);

    for (int i = old; i < alunni + old; i++) {
        cout << "\nInserire la matricola:\t";
        cin >> s[i].matricola;
        cout << "Inserire il nome:\t";
        cin >> s[i].nome;
        cout << "Inserire il cognome:\t";
        cin >> s[i].cognome;
        cout << "Inserire il voto di ammissione:\t";
        cin >> s[i].voto;
        s[i].voto >= 6 ? s[i].giudizio = "ammesso" : s[i].giudizio = "non-ammesso";
    }

    for (int i = old; i < alunni + old; i++) {
        Scrutini << endl << s[i].matricola << " " << s[i].nome << " " << s[i].cognome << " " << s[i].voto << " " << s[i].giudizio;   
    }

    Scrutini.close();
}

void media() {
    float n_al = 0, n_nonamm = 0;
    for (int i = 0; i < old + alunni; i++) {
        n_al++;
        if (s[i].giudizio == "non-ammesso") {n_nonamm++;}
    }

    cout << "\nLa percentuale dei non ammessi all'esame è:\t" << (n_nonamm / n_al) * 100 << "%\n";
}

int main() {
    fill_from_file();
    IO_fill_scru();
    media();

    return 0;
}