#include <iostream>

using namespace std;

class Persona {
    private:
        string Nome;
        string Cognome;
        int Anni;
    
    public:
        Persona(string n, string c, int a) {
            Nome = n;
            Cognome = c;
            Anni = a;
        }

        string getNome() {return(Nome);}
        string getCognome() {return(Cognome);}
        int getAnni() {return(Anni);}

        void setAnni(int valore) {Anni = valore;}

        void print() {
            cout << "\nLa persona '" << Nome << " " << Cognome << "' ha " << Anni << " anni." << endl;
        }
};

void changeAnni(string n, string c, int a) {
    Persona P(n, c, a);

    int x;

    cout << "\nInserire gli ANNI:\t";
    cin >> x;

    P.setAnni(x);

    P.print();
}

int main() {
    string nome, cognome;
    int anni;

    cout << "\nInserire il NOME:\t";
    cin >> nome;
    cout << "\nInserire il COGNOME:\t";
    cin >> cognome;
    cout << "\nInserire gli ANNI:\t";
    cin >> anni;

    Persona P(nome, cognome, anni);

    system("PAUSE");

    char x;
    cout << "\nVuoi cambiare gli ANNI [y/N]:\t";
    cin >> x;

    x == 'y' || x == 'Y' ? changeAnni(nome, cognome, anni) : P.print();

    return 0;
}