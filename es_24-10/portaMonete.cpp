#include <iostream>

using namespace std;

class portaMonete {
    public:
        int cent50, euro1, euro2;

        portaMonete() {
            cent50 = 0;
            euro1 = 0;
            euro2 = 0;
        }

        portaMonete(int nCent, int nEuri1, int nEuri2) {
             cent50 = nCent;
             euro1 = nEuri1;
             euro2 = nEuri2;
        }

        void inserisci(double valore) {
            if (valore == 0.5) {cent50++;}
            else if (valore == 1) {euro1++;}
            else if (valore == 2) {euro2++;}
        }

        void inserisciN(double valore, int x) {
            if (valore == 0.5) {cent50 += x;}
            else if (valore == 1) {euro1 += x;}
            else if (valore == 2) {euro2 += x;}
        }

        void denaroM(int valore) {
            switch (valore) {
                case 0:
                    cout << "\nNel portafoglio ci sono:\t" << (euro2 * 2) + (euro1 * 1) + (cent50 * 0.5) << " euro in moneta.";
                break;

                case 1:
                    cout << "\nNel portafoglio ci sono " << cent50 << " monete da 50 centesimi.";
                break;

                case 2:
                    cout << "\nNel portafoglio ci sono " << euro1 << " monete da 1 euro.";
                break;

                case 3:
                    cout << "\nNel portafoglio ci sono " << euro2 << " monete da 2 euro.";
                break;
            }
        }
};
class banconote : public portaMonete {
    public:
        int euro5, euro10, euro20;

        banconote() {
            euro5 = 0;
            euro10 = 0;
            euro20 = 0;
        }
        banconote(int nEuri5, int nEuri10, int nEuri20) {
             euro5 = nEuri5;
             euro10 = nEuri10;
             euro20 = nEuri20;
        }

        void inserisci_contante(double valore) {
            if (valore == 5) {euro5++;}
            else if (valore == 10) {euro10++;}
            else if (valore == 20) {euro20++;}
        }

        void inserisci_contanteN(double valore, int x) {
            if (valore == 5) {euro5 += x;}
            else if (valore == 10) {euro10 += x;}
            else if (valore == 20) {euro20 += x;}
        }

        void denaroC(int valore) {
            switch (valore) {
                case 0:
                    cout << "\nNel portafoglio ci sono:\t" << (euro20 * 20) + (euro10 * 10) + (euro5 * 5) << " euro in banconote.";
                break;

                case 1:
                    cout << "\nNel portafoglio ci sono " << euro5 << " banconote da 5 euro.";
                break;

                case 2:
                    cout << "\nNel portafoglio ci sono " << euro10 << " banconote da 10 euro.";
                break;

                case 3:
                    cout << "\nNel portafoglio ci sono " << euro20 << " banconote da 20 euro.";
                break;

                case 100:
                    cout << "\nNel portafoglio ci sono " << (euro20 * 20) + (euro10 * 10) + (euro5 * 5) + (euro2 * 2) + (euro1 * 1) + (cent50 * 0.5) << " euro.";
                break;
            }
        }
};

banconote b;

int main() {
    double x;
    for (int i = 0; i < 3; i++) {
        cout << "\nInserire una moneta:\t";
        cin >> x;
        b.inserisci(x);
    }

    int n;
    for (int i = 0; i < 3; i++) {
        cout << "\nInserire la banconota:\t";
        cin >> n;
        b.inserisci_contante(n);
    }

    b.inserisciN(0.5, 3);
    b.inserisci_contanteN(20, 2);

    b.denaroM(0);
    b.denaroC(0);
    b.denaroC(100);

    return 0;
}