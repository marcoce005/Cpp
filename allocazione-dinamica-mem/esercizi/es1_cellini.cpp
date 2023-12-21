#include <iostream>
#include <vector>

using namespace std;

#define N 3

struct nodo {
    string nome;
    int voto;
};

vector <nodo> alunni;

void firstAdd () {
    for (int i = 0; i < N; i++) {
        alunni.push_back(nodo());
        cout << "\nInserire il nome:\t";
        cin >> alunni.at(i).nome;
        cout << "Inserire il voto:\t";
        cin >> alunni.at(i).voto;
    }
}

void insert() {
    alunni.push_back(nodo());
    cout << "\nInserire il nome:\t";
    cin >> alunni.at(alunni.size() - 1).nome;
    cout << "Inserire il voto:\t";
    cin >> alunni.at(alunni.size() - 1).voto;
}

void remove() {
    int x;
    cout << "\nQuale vuoi eliminare:\t";
    cin >> x;
    alunni.erase(alunni.begin() + x - 1);
}

void edit() {
    int x;
    cout << "\nSelezionare la locazione da modificare:\t";
    cin >> x; 
    cout << "\nCambiare il nome da [" << alunni.at(--x).nome << "] a:\t";
    cin >> alunni.at(x).nome;
    cout << "\nCambiare il voto da [" << alunni.at(x).voto << "] a:\t";
    cin >> alunni.at(x).voto;
}

void stampa() {
    cout << "Nome\t\tVoto\n-------------------------\n";
    for (int i = 0; i < alunni.size(); i++) {
        cout << alunni.at(i).nome << "\t\t" << alunni.at(i).voto << endl;
    }
    cout << endl;
}

int main() {
    firstAdd();

    for (int i = 0; i < 3; i++) {
        char x;
        cout << "\nScegli la modalita':\n[i] per inserire\n[r] per rimuovere\n[m] per modificare\n........";
        cin >> x;
        switch (x) {
            case 'i':
                insert();
            break;

            case 'r':
                remove();
            break;

            case 'm':
                edit();
            break;
        }

        cout << "\nLista Finale:\n";
        stampa();
    }
    
    return 0;
}