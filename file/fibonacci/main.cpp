#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

fstream fileFib;

class Fib {
    public:
        double n1, n2;

        Fib() {
            n1 = 0;
            n2 = 1;
        }
        ~Fib() {}

        void print(int x) {
            fileFib.open("sequenza-di-Fib/sequenza-fibonacci.txt", ios::app);

            fileFib << n2 << endl;
            x--;
            while (x != 0) {
                double tot = n1 + n2;
            
                fileFib << tot << endl;

                n1 > n2 ? n2 = tot : n1 = tot;

                x--;
            }
            fileFib.close();
        }

        void clean() {
            remove("sequenza-di-Fib/sequenza-fibonacci.txt");
        }

        void control(int x) {
            if (x < 3 && x > 100) {
                cout << "\nValore invalido.";
                exit(1);
            }
        }
};

Fib f;

int main() {
    int valore;
    cout << "\nInserire il numero di numeri da visualizzare nel file:\t";
    cin >> valore;

    f.control(valore);

    f.clean();

    f.print(valore);

    return 0;
}