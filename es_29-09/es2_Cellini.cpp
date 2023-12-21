#include <iostream>

using namespace std;

class Libro {
    public:
        string Titolo;
        string Autore;
        string Anno;

        Libro() {}
};

int main() {

    Libro l1;
    Libro l2;

    cout << "\nInserire il titolo del libro:\t";
    cin >> l1.Titolo;
    cout << "\nInserire l'autore del libro:\t";
    cin >> l1.Autore;
    cout << "\nInserire l'anno di pubblicazione del libro:\t";
    cin >> l1.Anno;

    cout << "\nIl primo libro e' intitolato '" << l1.Titolo << "' scritto da " << l1.Autore << " nel " << l1.Anno << endl;

    system("PAUSE");

    cout << "\nInserire il titolo del libro:\t";
    cin >> l2.Titolo;
    cout << "\nInserire l'autore del libro:\t";
    cin >> l2.Autore;
    cout << "\nInserire l'anno di pubblicazione del libro:\t";
    cin >> l2.Anno;

    cout << "\nIl secondo libro e' intitolato '" << l2.Titolo << "' scritto da " << l2.Autore << " nel " << l2.Anno << endl;

    return 0;
}