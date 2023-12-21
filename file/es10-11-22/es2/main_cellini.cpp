#include <iostream>
#include <fstream>

#define ggP 5

using namespace std;

fstream Pioggia;

class pioggia {
    public:
        int millimetri;
        string giorno;

        pioggia() {}
        ~pioggia() {}
        
};

pioggia p[ggP];

void IO_fill_pioggia() {
    Pioggia.open("Pioggia.txt", ios::app);

    for (int i = 0; i < ggP; i++) {
        cout << "\nInserire il giono:\t";
        cin >> p[i].giorno;
        cout << "Inserire i millimetri di pioggia:\t";
        cin >> p[i].millimetri;
        if (p[i].millimetri < 0) {
            p[i].millimetri = 0;
        }
    }

    for (int i = 0; i < ggP; i++) {
        Pioggia << p[i].giorno << "\t" << p[i].millimetri << endl;
    }

    Pioggia.close();
}

void del() {
    remove("Pioggia.txt");
}

void media() {
    float tot = 0;
    for (int i = 0; i < ggP; i++) {
        tot += p[i].millimetri;
    }

    cout << "\nLa media della pioggia caduta in questi " << ggP << " è:\t" << tot / ggP << endl;
}

void max() {
    int max = 0;
    for (int i = 0; i < ggP; i++) {
        if (p[i].millimetri > max) {
            max = p[i].millimetri;
        }
    }

    cout << "\nLa quantita' massima di pioggia caduta in un giorno e' di:\t" << max;
}

void siccita() {
    int max = 0, cont = 0;
    for (int i = 0; i < ggP; i++) {
        if (p[i].millimetri == 0) {
            cont++;
            max = cont;
        }
        else {
            max = cont;
            cont = 0;
        }
    }

    cout << "\nIl massimmo di giorni di siccita' sono stati:\t" << max << endl;
}

int main() {
    del();
    IO_fill_pioggia();
    media();
    max();
    siccita();
    
    return 0;
}