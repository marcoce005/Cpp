#include <iostream>

using namespace std;

class Rettangolo {
    private:
        float b, h;

    public:
        Rettangolo() {}
        ~Rettangolo() {}

        void set(int n, float valore) {
            switch (n)
            {
                case 0:
                    b = valore;
                break;

                case 1:
                    h = valore;
                break;
            }
        }

        float get(int n) {
            switch (n)
            {
                case 0:
                    return b;
                break;

                case 1:
                    return h;
                break;
            }
            return 0;
        }

        float perimetro() {return((b + h) * 2);}
        float area() {return(b * h);}
};

Rettangolo r;

void riempi() {
    float v[2];

    cout << "\nInserire la base del rettangolo:\t";
    cin >> v[0];
    cout << "\nInserire l'altezza del rettangolo:\t";
    cin >> v[1];

    for (int i = 0; i < 2; i++) {
        r.set(i, v[i]);
    }
}

void print() {
    cout << "\nPerimetro:\t" << r.perimetro() << "\nArea:\t" << r.area();
}

int main() {
    riempi();

    print();
    
    return 0;
}