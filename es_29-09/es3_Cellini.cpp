#include <iostream>

using namespace std;

class Impiegato {
    public:
        string Nome;
        string Cognome;
        string Reparto;

        Impiegato() {}
};

int main() {

    Impiegato i1;
    Impiegato i2;

    cout << "\nInserire il nome dell'impiegato:\t";
    cin >> i1.Nome;
    cout << "\nInserire il cognome dell'impiegato:\t";
    cin >> i1.Cognome;
    cout << "\nInserire il reparto in cui lavora l'impiegato:\t";
    cin >> i1.Reparto;

    cout << "\nL'impiegato di nome '" << i1.Nome << " " << i1.Cognome << "' lavora nel reparto " << i1.Reparto << endl;

    system("PAUSE");

    cout << "\nInserire il nome dell'impiegato:\t";
    cin >> i2.Nome;
    cout << "\nInserire il cognome dell'impiegato:\t";
    cin >> i2.Cognome;
    cout << "\nInserire il reparto in cui lavora l'impiegato:\t";
    cin >> i2.Reparto;

    cout << "\nL'impiegato di nome '" << i2.Nome << " " << i2.Cognome << "' lavora nel reparto " << i2.Reparto << endl;

    return 0;
}