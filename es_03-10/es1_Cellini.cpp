#include <iostream>
#include <cstring>

using namespace std;

#define N 1000

class Libro {
    public:
        string ISBN;
        string Titolo;
        int Anno;
        string Genere;
        string Autore;

        Libro() {}
};

char choose() {
    char v;
    cout << "\n\nInserire [t] per cercare il libro partendo dal Titolo\nInserire [+] per aggiungere un libro alla biblioteca\nInserire [a] per cercare tutti i libri di uno specifico autore\n..................";
    cin >> v;

    return(v);
}

int main() {
    Libro l[N];
    
    int n;
    cout << "\nQuanti libri voglio inserire:\t";
    cin >> n; 

    for (int i = 0; i < n; i++) {
        cout << "\nInserire il codice ISBN del " << i+1 << "^ libro:\t";
        cin >> l[i].ISBN;
        cout << "\nInserire il titolo del " << i+1 << "^ libro:\t";
        cin >> l[i].Titolo;
        cout << "\nInserire l'anno di pubblicazione del " << i+1 << "^ libro:\t";
        cin >> l[i].Anno;
        cout << "\nInserire il genere del " << i+1 << "^ libro:\t";
        cin >> l[i].Genere;
        cout << "\nInserire l'autore del " << i+1 << "^ libro:\t";
        cin >> l[i].Autore;
    }

    string autore;
    string titolo;
    
    char v = choose();

    switch (v)
    {
        case '+':
            n += 1;
            cout << "\nInserire il codice ISBN del " << n << "^ libro:\t";
            cin >> l[n-1].ISBN;
            cout << "\nInserire il titolo del " << n << "^ libro:\t";
            cin >> l[n-1].Titolo;
            cout << "\nInserire l'anno di pubblicazione del " << n << "^ libro:\t";
            cin >> l[n-1].Anno;
            cout << "\nInserire il genere del " << n << "^ libro:\t";
            cin >> l[n-1].Genere;
            cout << "\nInserire l'autore del " << n << "^ libro:\t";
            cin >> l[n-1].Autore;

            for (int i = 0; i < n; i++) {
                cout << "\n\n\nLibro " << i+1 <<" --->\nTitolo:\t" << l[i].Titolo << "\nGenere:\t" << l[i].Genere << "\nCodice ISBN:\t" << l[i].ISBN << "\nAnno di pubblicazione:\t" << l[i].Anno << "\nAutore:\t" << l[i].Autore;
            }
        break;
        
        case 'a':
            cout << "\nInserire l'autore del libro:\t";
            cin >> autore;

            for (int i = 0; i < n; i++) {
                if (autore == l[i].Autore) {
                    cout << "\nInformazioni sul libro dell'autore '" << autore << "':\nTitolo:\t" << l[i].Titolo << "\nGenere:\t" << l[i].Genere << "\nCodice ISBN:\t" << l[i].ISBN << "\nAnno di pubblicazione:\t" << l[i].Anno << "\nAutore:\t" << l[i].Autore;
                }
            }
        break;
        
        case 't':
            cout << "\nInserire il titolo del libro:\t";
            cin >> titolo;

            for (int i = 0; i < n; i++) {
                if (titolo == l[i].Titolo) {
                    cout << "\nInformazioni sul libro con il titolo '" << titolo << "':\nTitolo:\t" << l[i].Titolo << "\nGenere:\t" << l[i].Genere << "\nCodice ISBN:\t" << l[i].ISBN << "\nAnno di pubblicazione:\t" << l[i].Anno << "\nAutore:\t" << l[i].Autore;
                    break;
                }
            }
        break;
        
        default:
        break;   
    }

    return 0;
}