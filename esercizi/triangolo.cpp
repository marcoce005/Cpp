#include <iostream>
#include <stdlib.h>

using namespace std;

class Triangolo {
    private:
        float b;
        float lo1;
        float lo2;
        float h;

    public:
        Triangolo() {}
        ~Triangolo() {}

        void set(int n, float valore) {
            switch (n)
            {
                case 0:
                    b = valore;
                break;

                case 1:
                    lo1 = valore;
                break;
                
                case 2:
                    lo2 = valore;  
                break;
                
                case 3:
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
                    return lo1;
                break;
                
                case 2:
                    return lo2;
                break;
                
                case 3:
                    return h; 
                break;
            }
            return 0;
        }

        float Perimetro() {return (b + lo1 + lo2);}
        float Area() {return ((b * h) / 2);}

        void controllo(float n) {
            if (n < 0) {
                cout << "\nValore non valido";
                exit(1);
            }
        }
};

int main() {
    Triangolo t;

    float v[4];

    cout << "\nInserire la base del triangolo:\t";
    cin >> v[0];
    t.controllo(v[0]);
    cout << "Inserire il lato obliquo del triangolo:\t";
    cin >> v[1];
    t.controllo(v[1]);
    cout << "Inserire il lato obliquo del triangolo:\t";
    cin >> v[2];
    t.controllo(v[2]);
    cout << "Inserire l'altezza del triangolo:\t";
    cin >> v[3];
    t.controllo(v[3]);

    for (int i = 0; i < 4; i++) {
        t.set(i, v[i]);
    }

    cout << "\nArea:\t" << t.Area() << "\nPerimetro:\t" << t.Perimetro();

    return 0;
}