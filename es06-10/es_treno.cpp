#include <iostream>

#define n_vagoni 3
#define n_fermate 2

using namespace std;

class treno {
    public:
        int postixvagone;
        int p_tot;

        treno() {}        
};

class vagone {
    public:
        int posti_liberi;

        vagone() {}
};

int main() {
    treno t;

    cout << "\nInserire il numero di posti per vagone:\t";
    cin >> t.postixvagone;

    t.p_tot = n_vagoni * t.postixvagone;

    vagone v[n_vagoni];

    for (int i = 0; i < 3; i++) {
        v[i].posti_liberi = t.postixvagone;
    }

    cout << "\n\nIl treno inizia la sua corsa vouto.\n";

    int n = 0;
    for (int i = 0; i < n_fermate; i++) {
        cout << "\n\nIl treno raggiunge la " << i+1 << "^ fermata.\n";
        if (i == 0) {
            cout << "\nTutti i posti sono liberi.";
            cout << "\nInserire il numero di persone che SALGONO sul treno per ogni vagone:\n";
            for (int x = 0; x < n_vagoni; x++) {
                cout << "Vagone " << x+1 << ":\t";
                cin >> n;
                if (n > t.postixvagone) {
                    cout << n - t.postixvagone << " persone no posso salire su questo vagone.\n";
                    v[x].posti_liberi = 0;
                }
                else {
                    v[x].posti_liberi = v[x].posti_liberi - n;
                }
            }
        }
        else {
            cout << "\nInserire il numero di persone che SALGONO sul treno per ogni vagone:\n";
            for (int x = 0; x < n_vagoni; x++) {
                if (v[x].posti_liberi <= 0) {
                    cout << "Vagone " << x+1 << " pieno.\n";
                }
                else {
                    cout << "Ci sono abbastanza posti liberi.\n";
                    cout << "Vagone " << x+1 << ":\t";
                    cin >> n;
                    if (n > t.postixvagone) {
                        cout << n -t.postixvagone << " persone non posso salire su questo vagone.";
                        v[x].posti_liberi = 0;
                    }
                    else {
                        v[x].posti_liberi = v[x].posti_liberi - n;
                    }
                }
            }

            cout << "\nInserire il numero di persone che SCENDONO dal treno per ogni vagone:\n";
            for (int y = 0; y < n_vagoni; y++) {
                cout << "Vagone " << y+1 << ":\t";
                cin >> n;
                if (n > t.postixvagone) {
                    cout << "\nTutte le persone sono scese dal treno.";
                }
                else {
                    v[y].posti_liberi = v[y].posti_liberi + n;
                }
                
            }
        }
    }

    for (int i = 0; i < n_vagoni; i++) {
        if (v[i].posti_liberi <= 0) {
            cout << "\nIl vagone " << i+1 << " e' pieno.";
        }
        else {
           cout << "\nNel vagone " << i+1 << " ci sono " << v[i].posti_liberi << " posti liberi";
        }
    }
    

    return 0;
}