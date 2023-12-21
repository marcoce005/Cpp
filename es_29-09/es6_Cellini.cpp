#include <iostream>

using namespace std;

class Car {
    public:
        string Marca;
        string Modello;
        int Speed;
        bool Motore;

        Car() {
            Motore = 0;
            Speed = 0;
        }

        void accellera(int x) {Speed += x;}
        void OnOff() {Motore =! Motore;}
        void frena() {Speed = 0;}

        void print() {
            cout << "\n\n\nStato della macchina:\n" << "--Marca\t\t" << Marca << "\n--Modello\t\t" << Modello << "\n--Velocita'\t\t" << Speed << " Km/h\n--Motore\t\t" << Motore << "\n\n\n";
        }
};

int main() {
    Car macchina;

    cout << "\nInserire il MODELLO della macchina:\t";
    cin >> macchina.Modello;
    cout << "\nInserire la MARCA della macchina:\t";
    cin >> macchina.Marca;

    system("PAUSE");

    for(int i = 0; i < 3; i++) {
        char comando;

        cout << "\n\n\nPremere [e] per accendere o spegnere la macchina.\nPremere [w] per far accellerare la macchina.\nPremere [s] per frenare la macchina.\n\n.........";
        cin >> comando;

        int v;

        switch (comando)
        {
            case 'e':
                macchina.OnOff();      
            break;

            case 'w':
                if (macchina.Motore == 1) {
                    cout << "\nDi quanti Km/h vuoi accellerare:\t";
                    cin >> v;
                    macchina.accellera(v);
                }
                else {
                    cout << "\nLa macchina non e' accesa!!!";
                }
            break;

            case 's':
                macchina.frena();
            break;
        }

        macchina.print();
    }

    return 0;
}