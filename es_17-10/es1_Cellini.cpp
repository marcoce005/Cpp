#include <iostream>
#include <bitset>
#include <stdlib.h>
#include <string>

using namespace std;

class Conversioni {
    private:
        int n;

    public:
        Conversioni() {}
        ~Conversioni() {}

        void set(int x) {n = x;}
        int get() {return n;}

        bitset<8> converti_dec() {return(bitset<8>(n));}

        bitset<8> converti_comp() {
            string bin = to_string(n);
            bitset<8> pattern{bin}, x;
            return(~x);
        }

        int converti_bin(string bin) {return(stoi(bin, nullptr, 2));}
};

Conversioni c;

void riempi_dec() {
    int valore;
    cout << "\nInserire il numero da convertire:\t";
    cin >> valore;
    if (valore < 0 || valore > 255) {
        cout << "\nValore INVALIDO!!!";
        exit(1);
    }    
    c.set(valore);
    cout << "\nIl numero " << c.get() << " in binario corrisponde a:\t" << c.converti_dec();
}

void riempi_bin() {
    string bin;
    cout << "\nInserire la sequenza di bit:\t";
    cin >> bin;

    cout << "\nIl numero " << bin << " in decimale corrisponde a:\t" << c.converti_bin(bin);
}

void riempo_comp() {
    int valore;
    cout << "\nInserire il numero da convertire:\t";
    cin >> valore;
    if (valore > 127 || valore < -128) {
        cout << "\nValore INVALIDO!!!";
        exit(1);
    }    
    c.set(valore);
    cout << "\nIl numero " << c.get() << " in binario corrisponde a:\t" << c.converti_dec();
}

void choose() {
    char c;
    cout << "\nInserire [d] per convertire un numero decimale.\nInserire [b] per convertire un numero binario\nInserire [2] per fare il complemento a due.\n.................";
    cin >> c;
    switch (c)
    {
        case 'd':
            riempi_dec();    
        break;

        case 'b':
            riempi_bin();
        break;

        case '2':
              riempo_comp();
        break;
    }
}

int main() {
    choose();

    return 0;
}