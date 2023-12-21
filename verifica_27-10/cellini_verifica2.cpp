#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <bitset>
#include <string>

#define bit 16

using namespace std;

class calcola {
    private:
        int n, n2;
    
    public:
        calcola() {}
        ~calcola() {}

        void set1(int x) {n = x;}
        void set2(int x) {n2 = x;}
        int get1() {return n;}
        int get2() {return n2;}

        void dec_to_bin() {
            bool bin[bit];

            for (int i = 0; i < bit; i++) {
                bin[i] = n % 2;
                n /= 2;
            }

            for (int i = bit; i >= 0; i--) {
                cout << bin[i];
            }
        }

        void ca2() {
            bitset<bit> x =  bitset<bit>(n);
            bitset<bit> y =  bitset<bit>(n2);

            cout << "\nn1 = " << x;
            cout << "\nn2 = " << y;
        }
};

calcola c;

void parte1() {
    int x;
    cout << "\nInserire il numero decimale:\t";
    cin >> x;

    if (x > 255) {
        cout << "\nValore invalido.";
        exit(1);
    }

    c.set1(x);
    c.dec_to_bin();
}

void parte2() {
    int x[2];

    cout << "\nInserire il primo numero decimale:\t";
    cin >> x[0];
    cout << "\nInserire il secondo numero decimale:\t";
    cin >> x[1];

    for (int i = 0; i < 2; i++) {
        if (x[i] > (pow(2, bit - 1) - 1) || x[i] < (pow(2, bit - 1)) * (-1)) {
            cout << "\nC'è un valore invalido"; 
            exit(1);
        }
    }

    c.set1(x[0]);
    c.set2(x[1]);

    c.ca2();
}

int main() {
    parte1();
    parte2();
    return 0;
}